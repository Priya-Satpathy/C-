#include <stdio.h>

int main() {
    int ms, os, n, ps[50];
    int i, partition_size;
    int internal_frag = 0, allocated = 0;

    // Step 3: Enter total memory size
    printf("Enter total memory size: ");
    scanf("%d", &ms);

    // Step 4: Allocate memory for OS
    printf("Enter memory size occupied by OS: ");
    scanf("%d", &os);

    ms = ms - os;

    // Step 5: Enter number of partitions
    printf("Enter number of partitions: ");
    scanf("%d", &n);

    partition_size = ms / n;

    printf("\nEach partition size = %d\n", partition_size);

    // Step 6: Enter process sizes
    printf("\nEnter size of %d processes:\n", n);
    for(i = 0; i < n; i++) {
        printf("Process %d size: ", i + 1);
        scanf("%d", &ps[i]);
    }

    // Step 7: Allocation
    printf("\nProcess No\tProcess Size\tAllocated\tInternal Fragmentation\n");

    for(i = 0; i < n; i++) {
        if(ps[i] <= partition_size) {
            printf("%d\t\t%d\t\tYes\t\t%d\n", i + 1, ps[i], partition_size - ps[i]);
            internal_frag += (partition_size - ps[i]);
            allocated++;
        } else {
            printf("%d\t\t%d\t\tNo\t\t-\n", i + 1, ps[i]);
        }
    }

    // Step 8: Results
    printf("\nTotal Internal Fragmentation = %d\n", internal_frag);
    printf("Total Allocated Processes = %d\n", allocated);
    printf("Total Unallocated Processes = %d\n", n - allocated);

    return 0;
}
