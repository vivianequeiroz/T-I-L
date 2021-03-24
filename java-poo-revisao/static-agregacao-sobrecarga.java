public class Aluno extends Pessoa implements Autenticacao  {
    
    public static int qtdAluno = 0;

    private String rne;
    private int matricula; 
    private Turma turma; 
    private Situacao situacaoAcademica;

public Aluno(String nome, String rne, Turma turma) {
    super.setNome(nome);
    this.rne = rne;
    this.matricula = ++qtdAluno;
    this.turma = turma;
    this.situacaoAcademic a= Situacao.MATRICULADO;
}

public Aluno(String nome,Turma turma){
    super.setNome(nome);
    this.matricula = ++qtdAluno;
    this.turma = turma;
}

public static int getQtdAluno() {
	return qtdAluno;
}

public static void setQtdAluno(int qtdAluno) {
	Aluno.qtdAluno = qtdAluno;
}

public String getRne() {
	return rne;
}

public void setRne(String rne) {
	this.rne = rne;
}

public int getMatricula() {
	return matricula;
}

public void setMatricula(int matricula) {
	this.matricula = matricula;
}

public Turma getTurma() {
	return turma;
}

public void setTurma(Turma turma) {
	this.turma = turma;
}

public double calculoRefeicao() {
    return 5; 
}

public String toString() {
    return "Aluno [nome=" + super.getNome() + ",rne=" + rne + ",matricula=" + matricula + ", situação=" + situacaoAcademica + ",turma=" + turma+"]";
}

@Override
public void login(String user, String senha) {
	// TODO Auto-generated method stub
	
}


}