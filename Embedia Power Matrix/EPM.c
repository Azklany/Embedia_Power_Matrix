
#include "EPM.h"

int32 Power(int32 base,int32 exponent)
{
    int32 result=1;
    for(int32 i=0; i<exponent; i++)
        result*=base;
    return result;
}

int32 atoi_Conversion(int8* string)
{
    int32 result = 0;
    // Initialize res to 0
    int32 i = 0;
    // Iterate through the string strg and compute res
    while (string[i] != '\0')
    {
        result = result * 10 + (string[i] - '0');
        i++;
    }
    return result;
}

bool CheckEmbediaMatrix(int8* matrix[][3], int32 rows, int32 cols)
{
    // int above=0,below=0;
    int32 i = 1;
    for (int32 j = 0; j < cols; j++)
    {
        int32 below = atoi_Conversion(matrix[i+1][j]);
        int32 above = atoi_Conversion(matrix[i - 1][j]);
        if (Power(below, above) != atoi_Conversion(matrix[i][j]))
        {
            return 0;
        }
    }

    return 1;

}

void Test_Cases()
{
    // Test 1
    int8* matrix1[3][3] =
    {
        {"3", "2", "2"},
        {"8", "9", "25"},
        {"2", "3", "5"}
    };
    printf("Test Case 1:\n");
    printf("Matrix:\n");
    for (int32 i = 0; i < 3; i++)
    {
        for (int32 j = 0; j < 3; j++)
        {
            printf("\"%s\" ", matrix1[i][j]);
        }
        printf("\n");
    }
    if (CheckEmbediaMatrix(matrix1, 3, 3))
    {
        printf("Embedia Power Matrix\n\n");
    }
    else
    {
        printf("Not an Embedia Power Matrix\n\n");
    }

    printf("----------------------------------------\n");
    // Test 2
    int8* matrix2[3][3] =
    {
        {"1", "3", "5"},
        {"3", "7", "11"},
        {"5", "11", "17"}
    };
    printf("Test Case 2:\n");
    printf("Matrix:\n");
    for (int32 i = 0; i < 3; i++)
    {
        for (int32 j = 0; j < 3; j++)
        {
            printf("\"%s\" ", matrix2[i][j]);
        }
        printf("\n");
    }
    if (CheckEmbediaMatrix(matrix2, 3, 3))
    {
        printf("Embedia Power Matrix\n\n");
    }
    else
    {
        printf("Not an Embedia Power Matrix\n\n");
    }

    printf("----------------------------------------\n");
    // Test 3
    int8* matrix3[3][3] =
    {
        {"3", "4", "2"},
        {"512", "256", "49"},
        {"8", "4", "7"}
    };
    printf("Test Case 3:\n");
    printf("Matrix:\n");
    for (int8 i = 0; i < 3; i++)
    {
        for (int8 j = 0; j < 3; j++)
        {
            printf("\"%s\" ", matrix3[i][j]);
        }
        printf("\n");
    }
    if (CheckEmbediaMatrix(matrix3, 3, 3))
    {
        printf("Embedia Power Matrix\n\n");
    }
    else
    {
        printf("Not an Embedia Power Matrix\n\n");
    }

}
