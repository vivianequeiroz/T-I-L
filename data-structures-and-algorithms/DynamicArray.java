public class DynamicArray {

	// *** Implementation is made here instead of using ArrayList to practice
	// purposes ***

	int size;
	int capacity = 10;
	Object[] array;

	public DynamicArray() {
		this.array = new Object[capacity];
	}

	public DynamicArray(int capacity) {
		this.capacity = capacity;
		this.array = new Object[capacity];
	}

	public void add(Object data) {
		if (size >= capacity) {
			grow();
		}
		array[size] = data;
		size++;
	}

	public void insert(int index, Object data) {
		if (size >= capacity) {
			grow();
		}

		for (int i = size; i > index; i--) {
			array[i] = array[i - 1];
		}
		array[index] = data;
		size++;
	}

	public void delete(Object data) {
		for (int i = 0; i < size; i++) {
			if (array[i] == data) {
				for (int j = 0; j < (size - i - 1); j++) {
					array[i + j] = array[i + j + 1];
				}

				array[size - 1] = null;
				size--;

				if (size <= (int) (capacity / 3)) {
					shrink();
				}
				break;
			}
		}
	}

	public int search(Object data) {
		for (int i = 0; i < size; i++) {
			if (array[i] == data) {
				return i;
			}
		}
		return -1;
	}

	public void grow() {

		int newCapacity = (int) (capacity * 2);
		Object[] newArray = new Object[newCapacity];

		for (int i = 0; i < size; i++) {
			newArray[i] = array[i];
		}

		capacity = newCapacity;
		array = newArray;

	}

	public void shrink() {
		int newCapacity = (int) (capacity / 2);
		Object[] newArray = new Object[newCapacity];

		for (int i = 0; i < size; i++) {
			newArray[i] = array[i];
		}

		capacity = newCapacity;
		array = newArray;

	}

	public boolean isEmpty() {
		return size == 0;
	}

	public String toString() {
		String string = "";

		for (int i = 0; i < size; i++) {
			string += array[i] + ", ";
		}

		if (string != "") { // to remove the last comma
			string = "[" + string.substring(0, string.length() - 2) + "]";
		} else {
			string = "[]";
		}
		return string;
	}

	// ~ Usage examples:
	// 1.
	// 2.
	// 3.

	// ~ General characteristics
	// The capacity is enlarged. How much depends on the programming language, but
	// it's generally something
	// between 1.5 and 2
	// A copy of the original elements occurs every time the array is expanded
	// Elements are linked through the usage of pointers
	// There are Singly Linked Lists where a node has [ data | address ]
	// and there are Doubly Linked Lists where a node has two addresses [address |
	// data | address]

	// Advantages =)
	// There is random access of elements such as using index[i], O(1) constant
	// graph
	// On the contrary of Linked Lists, it has good locality of reference and data
	// cache utilization
	// It's easy to insert or delete elements at the end because no shift is
	// necessary

	// Disadvantages =(
	// We may not need the extra space reserved by the language, so it waster more
	// memory when compared to linked lists
	// It takes more time to shift elements, O(n) crescent graph
	// The copy of the previous array before expansion is time consuming, O(n)
	// crescent graph

}
