import { createPerson } from "./src/Person";

try {
	createPerson({
		age: 21,
		nickname: "John",
	});
} catch (error) {
	console.log(error.name);
	console.log(error.stack);
	console.log(error.message);
}
