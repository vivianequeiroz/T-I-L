import { DomainError } from "./DomainError";
import {
	Either,
	createSuccessResult,
	createFailureResult,
} from "./DomainResult";

type InvalidAgeStates = NegativeAge | NonIntegerAge;

interface NegativeAge extends DomainError {
	name: "Negative age";
}

interface NonIntegerAge extends DomainError {
	name: "Not integer age";
}

interface InvalidAge extends DomainError {
	name: "Invalid age";
	invalidStates: InvalidAgeStates[];
}

const createNegativeAge = (ageValue: number): NegativeAge => ({
	name: "Negative age",
	message: `Age must be a positive. Received ${ageValue}`,
});

const createNonIntegerAge = (ageValue: number): NonIntegerAge => ({
	name: "Not integer age",
	message: `Age must be an integer number. Received ${ageValue}`,
});

const createInvalidAge = (invalidStates: InvalidAgeStates[]): InvalidAge => ({
	name: "Invalid age",
	message: "Invalid age",
	invalidStates: invalidStates,
});

export const createAge = (ageValue): Either<number, InvalidAge> => {
	const invalidAgeStates: InvalidAgeStates[] = [];
	if (ageValue < 0) {
		// return createFailureResult<number, NegativeAge>(
		invalidAgeStates.push(createNegativeAge(ageValue));
	} else if (!Number.isInteger(ageValue)) {
		// return createFailureResult<number, NonIntegerAge>(
		invalidAgeStates.push(createNonIntegerAge(ageValue));
	}

	if (invalidAgeStates.length) {
		return createFailureResult<number, InvalidAge>(
			createInvalidAge(invalidAgeStates)
		);
	}

	return createSuccessResult<number, InvalidAge>(ageValue);
};
