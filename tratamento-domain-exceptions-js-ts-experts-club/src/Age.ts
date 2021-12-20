import { DomainError } from "./DomainError";

const createInvalidAge = (ageValue: number): DomainError => ({
	name: "Invalid age.";
	message: "Age must be a positive and integer number";
});

export const createAge = (ageValue): number | DomainError => {
	if (ageValue < 0 || !Number.isInteger(ageValue)) {
		//exceções esperadas -> consideradas nas regras de negócios, que previnem estados ilegais
		//- Trabalhar com o objetivo nativo Error ou suas implementações mais específicas tal como TypeError
		// throw new TypeError();
		return createInvalidAge(ageValue);
	}
	return ageValue;
};
