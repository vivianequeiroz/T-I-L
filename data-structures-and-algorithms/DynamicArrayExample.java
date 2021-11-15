
public class DynamicArrayExample {

	public static void main(String[] args) {

//		DynamicArray defaultDynamicArray = new DynamicArray();
//
//		System.out.println(defaultDynamicArray.capacity);

		DynamicArray myDynamicArray = new DynamicArray(5);

		System.out.println(myDynamicArray.capacity);

//		myDynamicArray.insert(0, 0);		
		myDynamicArray.add("A");
		myDynamicArray.add("B");
		myDynamicArray.add("C");
		myDynamicArray.add("D");
		myDynamicArray.add("E");
		myDynamicArray.add("F");

		myDynamicArray.delete("A");
		myDynamicArray.delete("B");
		myDynamicArray.delete("C");

		System.out.println("Is empty? " + myDynamicArray.isEmpty());
		System.out.println(myDynamicArray.capacity);
		System.out.println(myDynamicArray.size);

		System.out.println(myDynamicArray);

	}

}
