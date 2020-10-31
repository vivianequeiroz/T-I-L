int main() {

  struct numbersDiferent numbers[4];
  for (int i = 0; i < 4; i++) {
    printf("Digite o numero: ");
    scanf("%d", &numbers[i].numberDistinct);
  }

  struct numbersDiferent minor;

  for (int i = 0; i < 4; i++) {
    if (minor.numberDistinct > numbers[i].numberDistinct || minor.numberDistinct == 0) {
      minor.numberDistinct =  numbers[i].numberDistinct;
    }
  }

  printf("menor: %i", minor.numberDistinct);

  struct numbersDiferent result;

  for (int i = 0; i < 4; i++) {
    if (minor.numberDistinct != numbers[i].numberDistinct )   {
      result.numberDistinct = result.numberDistinct + numbers[i].numberDistinct;
    }
  }

  FILE* f;
  f = fopen("RESPOSTA.TXT", "w");

  fprintf(f, " %d", result.numberDistinct);

  fclose(f);
}

