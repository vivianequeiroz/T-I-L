import java.util.LinkedList;

public class LinkedListsExample {
	public static void main(String[] args) {

		LinkedList<String> linkedListAsStack = new LinkedList<String>();

		// it can behavior as a Stack
		linkedListAsStack.push("A");
		linkedListAsStack.push("B");
		linkedListAsStack.push("C");
		linkedListAsStack.push("D");
		linkedListAsStack.push("F");
		linkedListAsStack.pop();

		System.out.println(linkedListAsStack);

		LinkedList<String> linkedListAsQueue = new LinkedList<String>();

		// it can behavior as a Stack
		linkedListAsQueue.offer("A");
		linkedListAsQueue.offer("B");
		linkedListAsQueue.offer("C");
		linkedListAsQueue.offer("D");
		linkedListAsQueue.offer("F");
		linkedListAsQueue.poll();

	
		linkedListAsQueue.add(4, "E");
		linkedListAsQueue.remove("E");
		
		//System.out.println(linkedListAsQueue.indexOf("F"));
		
		//Peeking the head and the tail elements:
		System.out.println(linkedListAsQueue.peekFirst());
		System.out.println(linkedListAsQueue.peekFirst());
		
		//Adding to the head and the tail:
		linkedListAsQueue.addFirst("0");
		linkedListAsQueue.addLast("last");
		
		//Removing from head and tail:
		String headValue = linkedListAsQueue.removeFirst();
		String tailValue = linkedListAsQueue.removeLast();
		
		System.out.println(linkedListAsQueue);
		System.out.println(headValue);
		System.out.println(tailValue);
		
		
		
		// ~ Usage examples:
		// 1. GPS navigation
		// 2. Music playlist
		// 3. Stack or Queue  implementation

		// ~ General characteristics
		// Stores nodes that have 2 parts => data and address
		// Elements are linked through the usage of pointers
		// There are Singly Linked Lists where a node has [ data | address ]
		// and there are Doubly Linked Lists where a node has two addresses [address | data | address]
		
		// Advantages =)
		// When compared to Arrays:
		//  - Better at INSERTION and DELETION of nodes => O(1), linear constant graph. Arrays are O(n), crescent graph
		//  - Worse at searching for a specific element
		//  - Stored in non-consecutive memory locations (arrays values are stored in consecutive memory locations)
		// Allocates memory while running - it's a dynamic data structure
		
		// Disadvantages =( 
		// Due to the additional pointer attached to each element, it has a greater memory usage
		// There's no random access of elements such as using index[i]
		// To ACCESS elements it takes more time O(n), crescent graph
	}
}
