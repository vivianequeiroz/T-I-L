# Para obter os retornos e visualizações, foi utilizado o RStudioCloud juntamente ao arquivo 'shopping.csv'

library(Hmisc)

shoppingData <- read.csv2("shopping.csv")

# Podemos obter, com a função summary, informações que descrevem o conjunto de dados e
# que irão compor a visualização do boxplot dele:
summary(shoppingData)

# Com a função describe do pacote Hmisc, cada variável possui um retorno detalhado sobre suas características
# e que compõem outras visualizações como no Diagrama de Frequências, por exemplo:
describe(shoppingData)


boxplot(shoppingData)

