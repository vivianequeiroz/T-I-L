public class Avaliacao {
    private double nota;
    private Disciplina disciplina;
    private Aluno aluno;
    
    
	public Avaliacao(double nota, Disciplina disciplina, Aluno aluno) {
		super();
		this.nota = nota;
		this.disciplina = disciplina;
		this.aluno = aluno;
	}


	public double getNota() {
		return nota;
	}


	public void setNota(double nota) {
		this.nota = nota;
	}


	public Disciplina getDisciplina() {
		return disciplina;
	}


	public void setDisciplina(Disciplina disciplina) {
		this.disciplina = disciplina;
	}


	public Aluno getAluno() {
		return aluno;
	}


	public void setAluno(Aluno aluno) {
		this.aluno = aluno;
	}


	@Override
	public String toString() {
		return "Avaliacao [nota=" + nota + ", disciplina=" + disciplina + ", aluno=" + aluno + ", getNota()="
				+ getNota() + ", getDisciplina()=" + getDisciplina() + ", getAluno()=" + getAluno() + ", getClass()="
				+ getClass() + ", hashCode()=" + hashCode() + ", toString()=" + super.toString() + "]";
	}

    
}