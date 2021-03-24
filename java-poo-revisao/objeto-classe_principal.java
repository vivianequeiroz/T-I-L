import java.util.Scanner;

public class Principal {

    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        System.out.println("Insira a sigla: ");
        String sigla = entrada.next();

        Turma turma1 = new Turma(sigla, "ADS");
        System.out.println(turma1.toString());
    
        Professor p = new Professor("Johnata","Mestre",111);
        System.out.println(p.toString());

        System.out.println("Alunos: "+Aluno.qtdAluno);

        Aluno a = new Aluno("John",turma1);
        Aluno b = new Aluno("João",turma1);

        System.out.println(b.toString());

        System.out.println("Alunos: " +Aluno.qtdAluno);
    
        Disciplina d = new Disciplina("LG2A2", p);
        System.out.println(d.toString());
    
        Avaliacao av = new Avaliacao(10, d, b);
        System.out.println(av.toString());
    
    }
    
}