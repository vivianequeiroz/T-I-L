import java.util.Optional;

public class Optional {
  public static void main(String[] args) {
    // create an empty optional
    Optional<String> empty = Optional.empty();
    System.out.println("empty = " + empty);
    // create an optional with a value
    Optional<String> string = Optional.of("Hello");
    System.out.println("string = " + string);
    // create an optional with a null value
    Optional<String> nullString = Optional.of(null);
    System.out.println("nullString = " + nullString);
    // create an optional with a null value
    Optional<String> optionalString = Optional.ofNullable(null);
    System.out.println("optionalString = " + optionalString);
    // get the value of an optional
    String value = string.get();
    System.out.println("value = " + value);
    // get the value of an optional, or a default value
    String defaultValue = empty.orElse("default value");
    System.out.println("defaultValue = " + defaultValue);
    // get the value of an optional, or a default value
    String defaultNullValue = optionalString.orElse("default null value");
    System.out.println("defaultNullValue = " + defaultNullValue);
    // get the value of an optional, or a default value
    String defaultNullValue2 = optionalString.orElseGet(() -> "default null value");
    System.out.println("defaultNullValue2 = " + defaultNullValue2);
    // get the value of an optional, or a default value
    String defaultNullValue3 = optionalString.orElseThrow(() -> new RuntimeException("default null value"));
    System.out.println("defaultNullValue3 = " + defaultNullValue3);
  }
}
