//
//  pythagoras.c
//  portfolio
//
//  Created by Mir, Eyaad on 9/13/19.
//  Copyright © 2019 Mir, Eyaad. All rights reserved.
//

#include "labs.h"

int pythagoras(void) {
    
    double Adjacent, Opposite, Hypotenuse;
    printf("Enter first leg length\n");
    scanf("%lf", &Adjacent);
    printf("Enter second leg length\n");
    scanf("%lf", &Opposite);
    Hypotenuse = sqrt((Adjacent * Adjacent) + (Opposite * Opposite));
    printf("%lf", Hypotenuse);
    return 0;
}
