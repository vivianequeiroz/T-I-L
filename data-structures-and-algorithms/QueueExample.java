import java.util.LinkedList;
import java.util.Queue;

public class QueueExample {
  public static void main(String[] args) {

    // Queue<String> queue = new Queue<String>(); it doesn't work because Queue is a
    // Java Interface (part of Collection class), so its necessary to use a class
    // that implements its interface instead (LinkedinList or PriorityQueue) to be
    // instantiated

    Queue<String> queue = new LinkedList<String>();

    queue.offer("Karen");
    queue.offer("Chad");
    queue.offer("Harold");

    System.out.println(queue.peek());

    queue.poll();
    queue.poll();
    queue.poll();

    System.out.println(queue.isEmpty());
    System.out.println(queue.size());
    System.out.println(queue.contains("Harold")); // does not return the position/index of the object

    // ~ Usage examples:
    // 1 - Keyboard buffer

    // 2 - Printer queue

    // 3 - Used in LinkedLists, PriorityQueues, Breadth-first seach (BFS);

    // ~ General characteristics
    // FIFO => First In, First Out
    // Linear Data Structure
    // A collection designed for >>> holding <<< elements prior to processing
    // enqueue means addition to a queue, how it works depends on the language (in
    // Java, it works with offer() )
    // dequeue means removing from a queue, how it works depends on the language (in
    // Java, it works with poll() )
    // Java documentation recommends using the methods that does not throw
    // exceptions when there is not value:
    // => offer(), poll() and peek() instead of add(), remove() and element()

  }
}
