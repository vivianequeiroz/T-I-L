public class Exceptions {

  public static void main(String[] args) {

    class MyException extends RuntimeException {
      public MyException(String message) {
        super(message);
      }

      public MyException(String message, Throwable cause) {
        super(message, cause);
      }

      public void throwException(String[] args) {
        try {
          throw new RuntimeException("Error");
        } catch (RuntimeException e) {
          throw new MyException("Error", e);
        }
      }

      public void exceptionCause(String[] args) {
        try {
          exceptionCause(args);
        } catch (MyException e) {
          System.out.println(e.getCause());
        }
      }

      public void multipleExceptions(String[] args) {
        try {
          throw new RuntimeException("Error");
        } catch (RuntimeException e) {
          System.out.println("RuntimeException");
        } catch (Exception e) {
          System.out.println("Exception");
        }
      }

      public void multipleExceptionsWithOrOperator(String[] args) throws RuntimeException {
        try {
          throw new RuntimeException("Error");
        } catch (Exception e) {
          System.out.println("RuntimeException | Exception");
        }
      }
    }
  }
}
