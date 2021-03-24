public class Professor extends Pessoa implements Autenticacao {
    private String titulacao;
    private int siape;

    public Professor(String noem, String titulacao, int siape) {
        super.setNome(nome);
        this.titulacao = titulacao;
        this.siape = siape;
    }

    public String toString() {
        return "Professor [titulacao=" + titulacao + ", siape=" + siape + ", nome=" + getNome() + "]";
    }

    public double calculoRefeicao() {
        return 10;
    }
}