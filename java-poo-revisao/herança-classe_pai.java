public abstract class Pessoa {
    
    private String nome;
    public abstract double calculoRefeicao();
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String toString() {
        return "Pessoa [nome =" + nome + "]";
    }
}
