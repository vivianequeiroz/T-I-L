import java.lang.reflect.InvocationTargetException;

public class Main {
  public static void main(String[] args) {
    // 1. Instantiate classes using the parameterless constructor
    try {
      Class<?> c = Class.forName("java.util.Date");
      Object o = c.newInstance();
      System.out.println(o);
    } catch (ClassNotFoundException | InstantiationException | IllegalAccessException e) {
      e.printStackTrace();
    }
    // 2. Instantiate classes that use the parameterized constructor
    try {
      Class<?> c = Class.forName("java.util.Date");
      Object o = c.getConstructor(long.class).newInstance(1234567890);
      System.out.println(o);
    } catch (ClassNotFoundException | InstantiationException | IllegalAccessException | NoSuchMethodException
        | InvocationTargetException e) {
      e.printStackTrace();
    }
    // 3. List Methods and Attributes of the Class
    try {
      Class<?> c = Class.forName("java.util.Date");
      for (java.lang.reflect.Method m : c.getMethods()) {
        System.out.println(m);
      }
      for (java.lang.reflect.Field f : c.getFields()) {
        System.out.println(f);
      }
    } catch (ClassNotFoundException e) {
      e.printStackTrace();
    }
    // 4. Change the visibility of a private method to public
    try {
      Class<?> c = Class.forName("java.util.Date");
      java.lang.reflect.Method m = c.getDeclaredMethod("parse", String.class);
      m.setAccessible(true);
      Object o = m.invoke(null, "Wed, 12 Jun 2019 22:46:37 GMT");
      System.out.println(o);
    } catch (ClassNotFoundException | NoSuchMethodException | IllegalAccessException | InvocationTargetException e) {
      e.printStackTrace();
    }
  }
}