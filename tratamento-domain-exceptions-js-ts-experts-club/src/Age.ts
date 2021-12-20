export const createAge = (ageValue): number => {
	if (ageValue > 0 || !Number.isInteger(ageValue)) {
		//exceções esperadas -> consideradas nas regras de negócios, que previnem estados ilegais
		//- Trabalhar com o objetivo nativo Error ou suas implementações mais específicas tal como TypeError
		throw new TypeError();
	}
	return ageValue;
};
