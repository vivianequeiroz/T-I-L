class Model {
    constructor() {
      // The state of the model, an array of todo objects, prepopulated with some data
      this.todos = [
        {id: 1, text: 'Run a marathon', complete: false},
        {id: 2, text: 'Plant a garden', complete: false},
      ]
    }
  
    addTodo(todoText) {
      const todo = {
        id: this.todos.length > 0 ? this.todos[this.todos.length - 1].id + 1 : 1,
        text: todoText,
        complete: false,
      }
  
      this.todos.push(todo)
    }
  
    // Map through all todos, and replace the text of the todo with the specified id
    editTodo(id, updatedText) {
      this.todos = this.todos.map((todo) =>
        todo.id === id ? {id: todo.id, text: updatedText, complete: todo.complete} : todo,
      )
    }
  
    // Filter a todo out of the array by id
    deleteTodo(id) {
      this.todos = this.todos.filter((todo) => todo.id !== id)
    }
  
    // Flip the complete boolean on the specified todo
    toggleTodo(id) {
      this.todos = this.todos.map((todo) =>
        todo.id === id ? {id: todo.id, text: todo.text, complete: !todo.complete} : todo,
      )
    }
  }


// Class View

class View {
    constructor() {
    // Creation of root element
    this.app = this.getElement('#root');

    // Creation app title's 
    this.title = this.createElement('h1');
    this.title.textContent = 'To-dos';

    // Creation of form with the text area input and submit button
    this.form = this.createElement('form');
        
    this.input = this.createElement('input');
    this.input.type = 'text';
    this.input.placeholder = 'Add a to-do!';
    this.input.name = 'todo';

    this.submitButton = this.createElement('button');
    this.submitButton.textContent = 'Submit';
    // Todo list representation
    this.todoList = this.createElement('ul', 'todo-list');

    // Addition of input and submit buttons
    this.form.append(this.input, this.submitButton); 

    // Addition of title, form and todo list 
    this.app.append(this.title, this.form, this.todoList);
    }

    get _todoText() {
        return this.input.value
    }
    
    _resetInput() {
        this.input.value = ''
    }


    createElement(tag, className) {
        const element = document.createElement(tag);
        if(className) element.classList.add(className);

        return element;
    }

    getElement(selector) {
        const element = document.querySelector(selector) 

        return element; 
    }

    // Method to display the todo, reseting and redisplaying it 

    displayTodos(todos) {

    // To delete nodes 
    while (this.todoList.firstChild) {
        this.todoList.removeChild(this.todoList.firstChild)
    }

    // Display a default message 

    if(todos.length === 0) {
        const p = this.createElement('p');
        p.textContent = 'Nothing to do yet! Would like to add a task?';
        this.todoList.append(p);
    } else {
        // Creation of todo item nodes for each todo 
        todos.forEach(todo => {
            const li = this.createElement('li');
            li.id = todo.id;
            // Creation of a box to every todo inserted that can be toggled
            const checkbox = this.createElement('input');
            checkbox.type = 'checkbox';
            checkbox.checked = todo.complete;

            //Insert todo in a editable span 
            const span = this.createElement('span');
            span.contentEditable = true; 
            span.classList.add('editable');

            // Strikethrough the todo already done or just display the text
            if (todo.complete) {
                const strike = this.createElement('s');
                strike.textContent = todo.text;
                SpeechRecognitionAlternative.append(strike);
            } else {
                span.textContent = todo.text;
            }

            // Delete button for each item
            const deleteButton = this.createElement('button', 'delete')
            deleteButton.textContent = 'Delete';
            li.apeend(checkbox, span, deleteButton);

            // Add nodes to the todo list
            this.todoList.append(li);
        });
    }

}

}





// Class Controler 

class Controller {
    constructor(model, view) {
        this.model = model;
        this.view = view;

    }
}



const app = new Controller(new Model(), new View());

