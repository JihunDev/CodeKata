/*
    Instruction

    Bob needs a fast way to calculate the volume of a cuboid with three values: length, width and the height of the cuboid. Write a function to help Bob with this calculation.

    Ruby: def get_volume_of_cuboid(length, width, height) Bash: bash run_shell length width height
*/

/*
    Sample Tests

    #include <criterion/criterion.h>
    double getVolumeOfCubiod(double, double, double);

    Test(Tests, should_pass_all_the_tests_provided) {
        cr_assert_eq(getVolumeOfCubiod(1, 2, 2), 4);
        cr_assert_eq(getVolumeOfCubiod(6.3, 2, 5), 63);
    }
*/

double getVolumeOfCubiod(double length, double width, double height) {
  return length * width * height;
}
