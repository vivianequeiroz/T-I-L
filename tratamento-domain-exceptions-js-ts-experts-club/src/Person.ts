import { createAge } from "./Age";
import { createNickname } from "./Nickname";

export interface PersonValues {
	age: number;
	nickname: string;
}

export interface Person {
	age: number;
	nickname: string;
}

export const createPerson = (personValues: PersonValues): Person => {
	const { age: ageValue, nickname: nicknameValue } = personValues;
	const ageResult = createAge(ageValue);
	if (ageResult.isFailure()) {
		throw "";
	}
	const nickname = createNickname(nicknameValue);

	return {
		age: ageResult.value as number,
		nickname,
	};
};
