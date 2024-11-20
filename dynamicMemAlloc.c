#include <stdio.h>
#include <stdlib.h>
int main() {

  /**
   * C does not provide a built-in way to get the size of an array. With that
   * said, it does have the built-in sizeof operator, which you can use to
   * determine the size.
   *
   * The general syntax for using the sizeof operator is:
   * datatype size = sizeof(array_name) / sizeof(array_name[index])
   *
   * any pointer could point to a single char or array of defined data type.
   */
  // sebebini yarın derin araştırma sonucu yazacağım...
  /**
   * Why malloc and calloc Exist in C?
   * Memory allocation functions like malloc (memory allocation) and
   * calloc (contiguous allocation) are integral for handling dynamic memory.
   * They allow developers to manage memory during runtime, providing
   * flexibility to create structures whose size is only known during execution.
   *
   * Malloc:
   * - Allocates a block of memory of a specified size.
   * - Memory is uninitialized, meaning it may contain garbage values.
   * - Advantage: Slightly faster as it skips initialization.
   * - Usage: int *arr = malloc(sizeof(int) * n);
   *
   * calloc
   * - Allocates memory for an array of elements and initializes all bytes to
   * zero.
   * - Usage: int *arr = calloc(n, sizeof(int));
   * - Advantage: Ensures predictable memory content, useful for applications
   * that rely on zero-initialized data.
   *
   * Why is Type Safety Relevant in This Context?
   * They return a void*, which can be cast to any pointer type.
   * This makes C flexible but places the responsibility on the programmer to
   * ensure type correctness.
   *
   * Casting in C:
   * Casting the result of malloc is unnecessary in C because void*
   * automatically converts to other pointer types. Explicit casts clutter the
   * code and can mask errors if stdlib.h is not included, potentially leading
   * to subtle bugs on architectures where pointer sizes vary.
   *
   * int *arr = malloc(sizeof(int) * n);  // Correct
   * int *arr = (int *)malloc(sizeof(int) * n);  // Avoid cast in C!
   *
   * Significance of sizeof():
   * Use sizeof(*ptr) rather than a specific type to ensure the allocation size
   * is always correct, even if the type changes later:
   *
   * int *arr = malloc(n * sizeof(*arr));  // Safer than malloc(n *
   * sizeof(int));
   *
   * For most use cases:
   * - Use calloc when zero-initialization is essential.
   * - Use malloc for performance-critical code where initialization isn’t
   * required.
   * - Avoid casting malloc’s result in C to prevent clutter and potential
   * errors.
   *
   */

  /**
   * -- WHAT IS THE CALLOC? --
   * calloc() gives you a zero-initialized buffer, while malloc() leaves the
   * memory uninitialized.
   */

  printf("=== malloc Demonstration ===\n");
  int n;
  printf("Enter the number of integers for malloc: ");
  scanf("%d", &n);

  // Allocate memory using malloc
  int *arr_malloc = (int *)malloc(n * sizeof(int));
  if (arr_malloc == NULL) {
    printf("Memory allocation failed for malloc.\n");
    return 1;
  }

  printf("Initialize the allocated memory: ");
  for (int i = 0; i < n; i++) {
    printf("\n%d: ", i + 1);
    scanf(" %d", &arr_malloc[i]);
  }

  // Print the initialized values
  printf("malloc allocated and initialized memory: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr_malloc[i]);
  }
  printf("\n");

  printf("\n=== calloc Demonstration ===\n");
  printf("Enter the number of integers for calloc: ");
  scanf("%d", &n);

  // Allocate memory using calloc
  int *arr_calloc = (int *)calloc(n, sizeof(int));
  if (arr_calloc == NULL) {
    printf("Memory allocation failed for calloc.\n");
    free(arr_malloc); // Free previously allocated memory
    return 1;
  }

  // Print the zero-initialized values
  printf("calloc allocated and zero-initialized memory: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr_calloc[i]);
  }
  printf("\n");

  printf("\n=== realloc Demonstration ===\n");
  printf("Enter the new size for realloc: ");
  int new_n;
  scanf("%d", &new_n);

  // Resize the calloc array using realloc
  arr_calloc = (int *)realloc(arr_calloc, new_n * sizeof(int));
  arr_malloc = (int *)realloc(arr_malloc, new_n * sizeof(int));
  if (arr_calloc == NULL) {
    printf("Memory reallocation failed for realloc.\n");
    free(arr_malloc); // Free previously allocated memory
    return 1;
  }

  // Initialize any new elements (if the array was expanded)
  for (int i = n; i < new_n; i++) {
    arr_calloc[i] = 0;
  }
  for (int i = n; i < new_n; i++) {
    arr_malloc[i] = i + 1;
  }

  // Print the resized array
  printf("realloc resized calloc and initialized memory: ");
  for (int i = 0; i < new_n; i++) {
    printf("%d ", arr_calloc[i]);
  }
  printf("\n");
  printf("realloc resized malloc and initialized memory: ");
  for (int i = 0; i < new_n; i++) {
    printf("%d ", arr_malloc[i]);
  }
  printf("\n");

  printf("\n=== free Demonstration ===\n");

  // Free the allocated memory
  free(arr_malloc);
  free(arr_calloc);
  printf("Memory freed successfully.\n");

  printf("\n=== A Practise - 1 - ===\n");
  int mult_num = 10;
  int *mult_num_ptr;
  mult_num_ptr = malloc(mult_num * sizeof(mult_num));
  for (int i = 0; i < mult_num; i++) {
    mult_num_ptr[i] = 7 * (i + 1);
  }
  for (int i = 0; i < mult_num; i++) {
    printf("%d x %d = %d\n", i + 1, 7, mult_num_ptr[i]);
  }

  int new_mult_num = 15;
  mult_num_ptr = (int *)realloc(mult_num_ptr, new_mult_num * sizeof(mult_num));
  for (int i = mult_num; i <= new_mult_num; i++) {
    mult_num_ptr[i] = 7 * (i + 1);
  }
  for (int i = 0; i < new_mult_num; i++) {
    printf("%d x %d = %d\n", i + 1, 7, mult_num_ptr[i]);
  }

  return 0;
}