import java.util.concurrent.ForkJoinPool;
import java.util.concurrent.RecursiveAction;
import java.util.Arrays;

public class Main {
  public static void main(String[] args) {
    ForkJoinPool fjPool = new ForkJoinPool();
    int[] a = new int[3333344];
    for (int i = 0; i < a.length; i++) {
      int k = (int) (Math.random() * 22222);
      a[i] = k;
    }
    ForkJoinQuicksortTask forkJoinQuicksortTask = new ForkJoinQuicksortTask(a,
        0, a.length - 1);
    long start = System.nanoTime();
    fjPool.invoke(forkJoinQuicksortTask);
    System.out.println("Time: " + (System.nanoTime() - start));
  }
}

class ForkJoinQuicksortTask extends RecursiveAction {
  int[] a;
  int left;
  int right;

  public ForkJoinQuicksortTask(int[] a) {
    this(a, 0, a.length - 1);
  }

  public ForkJoinQuicksortTask(int[] a, int left, int right) {
    this.a = a;
    this.left = left;
    this.right = right;
  }

  @Override
  protected void compute() {
    if (serialThresholdMet()) {
      Arrays.sort(a, left, right + 1);
    } else {
      int pivotIndex = partition(a, left, right);
      ForkJoinQuicksortTask t1 = new ForkJoinQuicksortTask(a, left,
          pivotIndex - 1);
      ForkJoinQuicksortTask t2 = new ForkJoinQuicksortTask(a, pivotIndex + 1,
          right);
      t1.fork();
      t2.compute();
      t1.join();
    }
  }

  int partition(int[] a, int p, int r) {
    int i = p - 1;
    int x = a[r];
    for (int j = p; j < r; j++) {
      if (a[j] < x) {
        i++;
        swap(a, i, j);
      }
    }
    i++;
    swap(a, i, r);
    return i;
  }

  void swap(int[] a, int p, int r) {
    int t = a[p];
    a[p] = a[r];
    a[r] = t;
  }

  private boolean serialThresholdMet() {
    return right - left < 100000000;
  }
}