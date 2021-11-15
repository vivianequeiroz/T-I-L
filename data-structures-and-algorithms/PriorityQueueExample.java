import java.util.Queue;
import java.util.PriorityQueue;
import java.util.Collections;

public class PriorityQueueExample {
  public static void main(String[] args) {

    Queue<Double> crescentOrderQueue = new PriorityQueue<>();

    crescentOrderQueue.offer(3.0);
    crescentOrderQueue.offer(2.5);
    crescentOrderQueue.offer(4.0);
    crescentOrderQueue.offer(1.5);
    crescentOrderQueue.offer(2.0);

    while (!crescentOrderQueue.isEmpty()) {
      System.out.println(crescentOrderQueue.poll());
    } // it will return the values in crescent order and remove it from the queue
      // after printing each of them;

    Queue<Double> decrescentOrderQueue = new PriorityQueue<>(Collections.reverseOrder());

    decrescentOrderQueue.offer(3.0);
    decrescentOrderQueue.offer(2.5);
    decrescentOrderQueue.offer(4.0);
    decrescentOrderQueue.offer(1.5);
    decrescentOrderQueue.offer(2.0);

    while (!decrescentOrderQueue.isEmpty()) {
      System.out.println(decrescentOrderQueue.poll());
    } // it will return the values in DEcrescent order and remove it from the queue
      // after printing each of them;

    Queue<String> stringOrderQueue = new PriorityQueue<>();

    stringOrderQueue.offer("B");
    stringOrderQueue.offer("C");
    stringOrderQueue.offer("A");
    stringOrderQueue.offer("F");
    stringOrderQueue.offer("D");

    while (!stringOrderQueue.isEmpty()) {
      System.out.println(stringOrderQueue.poll());
    } // it will return the values in alphabetic order and remove it from the queue
      // after printing each of them
      // ** by creating an instance as new PriorityQueue<>(Collections.reverseOrder())
      // the reverse alphabetic order will be implemented

    // ~ Usage examples:
    // 1

    // ~ General characteristics
    // FIFO => First In, First Out
    // it serves elements with a higher priority first before elements with a lower
    // priority

  }
}
