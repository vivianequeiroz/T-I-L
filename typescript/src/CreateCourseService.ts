/**
 * duration: number
 * name: string
 * educator: string
 */

interface Course {
  name: string;
  duration: number;
  educator: string;
}
class CreateCourseService {
  execute({ name, duration, educator }: Course) {
    // with destructuring the arguments can be received in any order
    console.log(name, duration, educator);
  }
}

export default new CreateCourseService();
