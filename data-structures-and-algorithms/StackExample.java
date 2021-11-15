import java.utils.Stack;

public class Stack {
  public static void main(String[] args) {

    Stack<String> stack = new Stack<String>();

    stack.push("Celeste");
    stack.push("Life is strange");
    stack.push("Portal");

    // to verify if empty
    System.out.println(stack.empty());

    // to >>> remove <<< the last item
    System.out.println(stack.pop());

    // to search for a specific obj
    System.out.println(stack.search("Portal")); // it returns 1, the position of this element in the Stack. If the
                                                // element
                                                // does not exist, it will return -1

    // to >>> verify <<< the last element added to the stack
    System.out.println(stack.peek()); // it does not remove it from the stack
    // ******** In JavaScript: theres is not a native peek method that
    // Instead, it is common to see
    // const peeksTheLastElement = array[array.length - 1]
    // Adding peek method to the Array
    // prototype chain
    // Array.prototype.peek = function () {
    // if (this.length === 0) {
    // throw new Error("out of bounds");
    // }
    // return this[this.length - 1];
    // };

    // #It is possible to run out of memory with a stack

    // ~ Usage examples:
    // 1 - Undo and redo features in text editors like Word, VSCode, etc.
	
    // 2 - Move back or forward through browser history
	
    // 3 - Backtracking Algorithms (such as navigating through file directories)
    // >>> Backtracking is an algorithmic-technique for solving problems recursively by
    // trying to build a solution incrementally, one piece at a time, removing those
    // solutions that fail to satisfy the constraints of the problem at any point of
    // time
    // In SudoKo game, we try filling digits one by one. Whenever we find that
    // current digit cannot lead to a solution, we remove it (backtrack) and try
    // next digit. This is better than naive approach (generating all possible
    // combinations of digits and then trying every combination one by one) as it
    // drops a set of permutations whenever it backtracks <<< 
	
	// 4 - When calling a function (call stack);
	
	// ~ General characteristics
	// LIFO => Last In, First Out
	// Values area stored in a "vertical tower"
	// push() method add a value to the top
    // pop() method remove a value from the top

  }
}
