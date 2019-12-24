#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int main() {
  float dataSize, internetSpeed, downloadDurationSeconds, downloadDurationMinutes;

  printf("Enter file size (in Megabytes)\n");
  scanf("%f", &dataSize);
  printf("Enter internet speed (in Megabytes per seconds)\n");
  scanf("%f", &internetSpeed);

  downloadDurationSeconds = dataSize / internetSpeed * 60.0;
  downloadDurationMinutes = downloadDurationSeconds / 60.0;

  printf("Approximate download time in Minutes: %.2f\n", downloadDurationMinutes);
  printf("Approximate download time in Seconds: %.2f\n", downloadDurationSeconds);

  return 0;
}
