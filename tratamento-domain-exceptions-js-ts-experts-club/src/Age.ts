import { DomainError } from "./DomainError";
import {
	Either,
	createSuccessResult,
	createFailureResult,
} from "./DomainResult";

interface InvalidAge extends DomainError {
	name: "Invalid age";
	message: "Age must be a positive and integer number";
}

const createInvalidAge = (ageValue: number): InvalidAge => ({
	name: "Invalid age",
	message: "Age must be a positive and integer number",
});

export const createAge = (ageValue): Either<number, InvalidAge> => {
	if (ageValue < 0 || !Number.isInteger(ageValue)) {
		//exceções esperadas -> consideradas nas regras de negócios, que previnem estados ilegais
		//- Trabalhar com o objetivo nativo Error ou suas implementações mais específicas tal como TypeError
		// throw new TypeError();
		return createFailureResult(createInvalidAge(ageValue));
	}
	return createSuccessResult<number, InvalidAge>(ageValue);
};
