#include <stdio.h>
int type, min;
float water;
float check;
float pay, vat, sum,sum2;
float s[11][3];
float sp[1][1];
float a[3][11] = { 10.20,16.00,19.00,21.20,21.60,21.65,21.70,21.75,21.80,21.85,21.90,
                    16.00,19.00,20.00,21.50,21.60,21.65,21.70,21.75,21.80,21.85,21.90,
                        18.00,21.00,24.00,27.00,29.00,29.25,29.50,29.75,29.50,29.25,29.00};
int main()
{

    printf("เริ่มต้นโปรเเกรมคำนวณค่าน้ำ");
    printf("\nระบุประเภทผู้ใช้ : ");
    scanf("%d", &type);
    for (int i = 0; i < 1; i++)
    {
        switch (type)
        {
        case 1:
            printf("ระบุปริมาณการใช้น้ำ (unit) : ");
            scanf("%f", &water);
            if (water <= 10)
            {
                s[i][1] = water * a[0][0];
                check=a[0][0];
            }
            if (water >= 11 && water <= 20)
            {
                s[i][11] = water - 10;
                s[i][0] = water - 10;
                s[i][0] = s[i][0] * a[0][1];
                s[i][1] = 10 * a[0][0];
                check=a[0][1];
            }
            if (water >= 21 && water <= 30)
            {
                s[i][11] = water - 20;
                s[i][0] = water - 20;
                s[i][0] = s[i][0] * a[0][2];
                s[i][1] = 10 * a[0][0];
                s[i][2] = 10 * a[0][1];
                check=a[0][2];
            }
            if (water >= 31 && water <= 50)
            {
                s[i][11] = water - 30;
                s[i][0] = water - 30;
                s[i][0] = s[i][0] * a[0][3];
                s[i][1] = 10 * a[0][0];
                s[i][2] = 10 * a[0][1];
                s[i][3] = 10 * a[0][2];
                check=a[0][3];
            }
            if (water >= 51 && water <= 80)
            {
                s[i][11] = water - 50;
                s[i][0] = water - 50;
                s[i][0] = s[i][0] * a[0][4];
                s[i][1] = 10 * a[0][0];
                s[i][2] = 10 * a[0][1];
                s[i][3] = 10 * a[0][2];
                s[i][4] = 20 * a[0][3];
                check=a[0][4];
            }
            if (water >= 81 && water <= 100)
            {
                s[i][11] = water - 80;
                s[i][0] = water - 80;
                s[i][0] = s[i][0] * a[0][5];
                s[i][1] = 10 * a[0][0];
                s[i][2] = 10 * a[0][1];
                s[i][3] = 10 * a[0][2];
                s[i][4] = 20 * a[0][3];
                s[i][5] = 30 * a[0][4];
                check=a[0][5];
            }
            if (water >= 101 && water <= 300)
            {
                s[i][11] = water - 100;
                s[i][0] = water - 100;
                s[i][0] = s[i][0] * a[0][6];
                s[i][1] = 10 * a[0][0];
                s[i][2] = 10 * a[0][1];
                s[i][3] = 10 * a[0][2];
                s[i][4] = 20 * a[0][3];
                s[i][5] = 30 * a[0][4];
                s[i][6] = 20 * a[0][5];
                check=a[0][6];
            }
            if (water >= 301 && water <= 1000)
            {
                s[i][11] = water - 300;
                s[i][0] = water - 300;
                s[i][0] = s[i][0] * a[0][7];
                s[i][1] = 10 * a[0][0];
                s[i][2] = 10 * a[0][1];
                s[i][3] = 10 * a[0][2];
                s[i][4] = 20 * a[0][3];
                s[i][5] = 30 * a[0][4];
                s[i][6] = 20 * a[0][5];
                s[i][7] = 200 * a[0][6];
                check=a[0][7];
            }
            if (water >= 1001 && water <= 2000)
            {
                s[i][11] = water - 1000;
                s[i][0] = water - 1000;
                s[i][0] = s[i][0] * a[0][8];
                s[i][1] = 10 * a[0][0];
                s[i][2] = 10 * a[0][1];
                s[i][3] = 10 * a[0][2];
                s[i][4] = 20 * a[0][3];
                s[i][5] = 30 * a[0][4];
                s[i][6] = 20 * a[0][5];
                s[i][7] = 200 * a[0][6];
                s[i][8] = 700 * a[0][7];
                check=a[0][8];
            }
            if (water >= 2001 && water <= 3000)
            {
                s[i][11] = water - 2000;
                s[i][0] = water - 2000;
                s[i][0] = s[i][0] * a[0][9];
                s[i][1] = 10 * a[0][0];
                s[i][2] = 10 * a[0][1];
                s[i][3] = 10 * a[0][2];
                s[i][4] = 20 * a[0][3];
                s[i][5] = 30 * a[0][4];
                s[i][6] = 20 * a[0][5];
                s[i][7] = 200 * a[0][6];
                s[i][8] = 700 * a[0][7];
                s[i][9] = 1000 * a[0][8];
                check=a[0][9];
            }
            if (water > 3000)
            {
                s[i][11] = water - 3000;
                s[i][0] = water - 3000;
                s[i][0] = s[i][0] * a[0][10];
                s[i][1] = 10 * a[0][0];
                s[i][2] = 10 * a[0][1];
                s[i][3] = 10 * a[0][2];
                s[i][4] = 20 * a[0][3];
                s[i][5] = 30 * a[0][4];
                s[i][6] = 20 * a[0][5];
                s[i][7] = 200 * a[0][6];
                s[i][8] = 700 * a[0][7];
                s[i][9] = 1000 * a[0][8];
                s[i][10] = 1000 * a[0][9];
                check=a[0][10];
            }
            printf("ราคาต่อหน่วย");
            printf("        หน่วยน้ำที่ใช้");
            printf("    เป็นเงินทั้งสิ้น");
            printf("\n  (บาท)");
            printf("    คูณ");
            printf("     (ลบ.ม)");
            printf("       (บาท)");
            printf("\n");
            if (s[i][1] > 1.00)
            {
                printf("\n  %.2f", a[0][0]);
                printf("     *        10        %.2f", s[i][1]);
            }
            if (s[i][2] > 1.00)
            {
                printf("\n  %.2f", a[0][1]);
                printf("     *        10        %.2f", s[i][2]);
            }
            if (s[i][3] > 1.00)
            {
                printf("\n  %.2f", a[0][2]);
                printf("     *        10        %.2f", s[i][3]);
            }
            if (s[i][4] > 1.00)
            {
                printf("\n  %.2f", a[0][3]);
                printf("     *        20        %.2f", s[i][4]);
            }
            if (s[i][5] > 1.00)
            {
                printf("\n  %.2f", a[0][4]);
                printf("     *        30        %.2f", s[i][5]);
            }
            if (s[i][6] > 1.00)
            {
                printf("\n  %.2f", a[0][5]);
                printf("     *        20        %.2f", s[i][6]);
            }
            if (s[i][7] > 1.00)
            {
                printf("\n  %.2f", a[0][6]);
                printf("     *        200       %.2f", s[i][7]);
            }
            if (s[i][8] > 1.00)
            {
                printf("\n  %.2f", a[0][7]);
                printf("     *        700       %.2f", s[i][8]);
            }
            if (s[i][9] > 1.00)
            {
                printf("\n  %.2f", a[0][8]);
                printf("     *        1000      %.2f", s[i][9]);
            }
            if (s[i][10] > 1.00)
            {
                printf("\n  %.2f", a[0][9]);
                printf("     *        1000      %.2f", s[i][10]);
            }
                if (s[i][0] > 1.00)
                {
                if(s[i][11]>=1.00){
                    printf("\n  %.2f", check);
                    printf("     *        %.0f      %.2f" ,s[i][11],s[i][0]);
                }
                }
            break;
        case 2:
            printf("ระบุปริมาณการใช้น้ำ (unit) : ");
            scanf("%f", &water);
            if (water <= 10)
            {
                pay = water * a[1][0];
                if (pay < 150)
                {
                    min = 150 - pay;
                    s[i][0] = water * a[1][0];
                    s[i][1] = s[i][0] + min;
                    sp[0][1] = 150;
                    check=a[1][0];
                }
                else
                {
                    s[i][0] = water * a[1][0];
                    check=a[1][0];
                }
            }

            if (water >= 11 && water <= 20)
            {
                s[i][11] = water - 10;
                s[i][0] = water - 10;
                s[i][0] = s[i][0] * a[1][1];
                s[i][1] = 10 * a[1][0];
                check=a[1][1];
            }
            if (water >= 21 && water <= 30)
            {
                s[i][11] = water - 20;
                s[i][0] = water - 20;
                s[i][0] = s[i][0] * a[1][2];
                s[i][1] = 10 * a[1][0];
                s[i][2] = 10 * a[1][1];
                check=a[1][2];
            }
            if (water >= 31 && water <= 50)
            {
                s[i][11] = water - 30;
                s[i][0] = water - 30;
                s[i][0] = s[i][0] * a[1][3];
                s[i][1] = 10 * a[1][0];
                s[i][2] = 10 * a[1][1];
                s[i][3] = 10 * a[1][2];
                check=a[1][3];
            }
            if (water >= 51 && water <= 80)
            {
                s[i][11] = water - 50;
                s[i][0] = water - 50;
                s[i][0] = s[i][0] * a[1][4];
                s[i][1] = 10 * a[1][0];
                s[i][2] = 10 * a[1][1];
                s[i][3] = 10 * a[1][2];
                s[i][4] = 20 * a[1][3];
                check=a[1][4];
            }
            if (water >= 81 && water <= 100)
            {
                s[i][11] = water - 80;
                s[i][0] = water - 80;
                s[i][0] = s[i][0] * a[1][5];
                s[i][1] = 10 * a[1][0];
                s[i][2] = 10 * a[1][1];
                s[i][3] = 10 * a[1][2];
                s[i][4] = 20 * a[1][3];
                s[i][5] = 30 * a[1][4];
                check=a[1][5];
            }
            if (water >= 101 && water <= 300)
            {
                s[i][11] = water - 100;
                s[i][0] = water - 100;
                s[i][0] = s[i][0] * a[1][6];
                s[i][1] = 10 * a[1][0];
                s[i][2] = 10 * a[1][1];
                s[i][3] = 10 * a[1][2];
                s[i][4] = 20 * a[1][3];
                s[i][5] = 30 * a[1][4];
                s[i][6] = 20 * a[1][5];
                check=a[1][6];
            }
            if (water >= 301 && water <= 1000)
            {
                s[i][11] = water - 300;
                s[i][0] = water - 300;
                s[i][0] = s[i][0] * a[1][7];
                s[i][1] = 10 * a[1][0];
                s[i][2] = 10 * a[1][1];
                s[i][3] = 10 * a[1][2];
                s[i][4] = 20 * a[1][3];
                s[i][5] = 30 * a[1][4];
                s[i][6] = 20 * a[1][5];
                s[i][7] = 200 * a[1][6];
                check=a[1][7];
            }
            if (water >= 1001 && water <= 2000)
            {
                s[i][11] = water - 1000;
                s[i][0] = water - 1000;
                s[i][0] = s[i][0] * a[1][8];
                s[i][1] = 10 * a[1][0];
                s[i][2] = 10 * a[1][1];
                s[i][3] = 10 * a[1][2];
                s[i][4] = 20 * a[1][3];
                s[i][5] = 30 * a[1][4];
                s[i][6] = 20 * a[1][5];
                s[i][7] = 200 * a[1][6];
                s[i][8] = 700 * a[1][7];
                check=a[1][8];
            }
            if (water >= 2001 && water <= 3000)
            {
                s[i][11] = water - 2000;
                s[i][0] = water - 2000;
                s[i][0] = s[i][0] * a[1][9];
                s[i][1] = 10 * a[1][0];
                s[i][2] = 10 * a[1][1];
                s[i][3] = 10 * a[1][2];
                s[i][4] = 20 * a[1][3];
                s[i][5] = 30 * a[1][4];
                s[i][6] = 20 * a[1][5];
                s[i][7] = 200 * a[1][6];
                s[i][8] = 700 * a[1][7];
                s[i][9] = 1000 * a[1][8];
                check=a[1][9];
            }
            if (water > 3000)
            {
                s[i][11] = water - 3000;
                s[i][0] = water - 3000;
                s[i][0] = s[i][0] * a[1][10];
                s[i][1] = 10 * a[1][0];
                s[i][2] = 10 * a[1][1];
                s[i][3] = 10 * a[1][2];
                s[i][4] = 20 * a[1][3];
                s[i][5] = 30 * a[1][4];
                s[i][6] = 20 * a[1][5];
                s[i][7] = 200 * a[1][6];
                s[i][8] = 700 * a[1][7];
                s[i][9] = 1000 * a[1][8];
                s[i][10] = 1000 * a[1][9];
                check=a[1][10];
            }
            printf("ราคาต่อหน่วย");
            printf("        หน่วยน้ำที่ใช้");
            printf("    เป็นเงินทั้งสิ้น");
            printf("\n  (บาท)");
            printf("    คูณ");
            printf("     (ลบ.ม)");
            printf("       (บาท)");
            if (water < 10)
            {
                {
                    printf("\n  %.2f", a[1][0]);
                    printf("     *         %.0f      %.2f", water, s[i][0]);
                    printf("\n                               %.2f", sp[0][1]);
                    printf("\nอัตตราค่าน้ำขั้นต่ำ 150 บาท/เดือน (9 ลบ.ม)");
                }
            }
            else
            {
                printf("\n");
                if (s[i][1] > 1.00)
                {
                    printf("\n  %.2f", a[1][0]);
                    printf("     *        10        %.2f", s[i][1]);
                }
                if (s[i][2] > 1.00)
                {
                    printf("\n  %.2f", a[1][1]);
                    printf("     *        10        %.2f", s[i][2]);
                }
                if (s[i][3] > 1.00)
                {
                    printf("\n  %.2f", a[1][2]);
                    printf("     *        10        %.2f", s[i][3]);
                }
                if (s[i][4] > 1.00)
                {
                    printf("\n  %.2f", a[1][3]);
                    printf("     *        20        %.2f", s[i][4]);
                }
                if (s[i][5] > 1.00)
                {
                    printf("\n  %.2f", a[1][4]);
                    printf("     *        30        %.2f", s[i][5]);
                }
                if (s[i][6] > 1.00)
                {
                    printf("\n  %.2f", a[1][5]);
                    printf("     *        20        %.2f", s[i][6]);
                }
                if (s[i][7] > 1.00)
                {
                    printf("\n  %.2f", a[1][6]);
                    printf("     *        200       %.2f", s[i][7]);
                }
                if (s[i][8] > 1.00)
                {
                    printf("\n  %.2f", a[1][7]);
                    printf("     *        700       %.2f", s[i][8]);
                }
                if (s[i][9] > 1.00)
                {
                    printf("\n  %.2f", a[1][8]);
                    printf("     *        1000      %.2f", s[i][9]);
                }
                if (s[i][10] > 1.00)
                {
                    printf("\n  %.2f", a[1][9]);
                    printf("     *        1000      %.2f", s[i][10]);
                }
                if (s[i][0] > 1.00)
                {
                if(s[i][11]>=1.00){
                    printf("\n  %.2f", check);
                    printf("     *        %.0f      %.2f" ,s[i][11],s[i][0]);
                }
                if(water>9){
                    printf("\n  %.2f", a[1][0]);
                    printf("     *         %.0f      %.2f", water, s[i][0]);
                    
                }
            
                }
               
            }
            break;
        case 3:
            printf("ระบุปริมาณการใช้น้ำ (unit) : ");
            scanf("%f", &water);
            if (water <= 10)
            {
                pay = water * a[2][0];
                if (pay < 300.00)
                {
                    min = 300 - pay;
                    pay = water * a[2][0];
                    sp[0][0] = 300;
                    s[i][0] = pay + min;
                    check=a[2][0];
                }
            }
            if (water >= 11 && water <= 20)
            {
                s[i][11] = water - 10;
                s[i][0] = water - 10;
                s[i][0] = s[i][0] * a[2][1];
                s[i][1] = 10 * a[2][0];
                check=a[2][1];
            }
            if (water >= 21 && water <= 30)
            {
                s[i][11] = water - 20;
                s[i][0] = water - 20;
                s[i][0] = s[i][0] * a[2][2];
                s[i][1] = 10 * a[2][0];
                s[i][2] = 10 * a[2][1];
                check=a[2][2];
            }
            if (water >= 31 && water <= 50)
            {
                s[i][11] = water - 30;
                s[i][0] = water - 30;
                s[i][0] = s[i][0] * a[2][3];
                s[i][1] = 10 * a[2][0];
                s[i][2] = 10 * a[2][1];
                s[i][3] = 10 * a[2][2];
                check=a[2][3];
            }
            if (water >= 51 && water <= 80)
            {
                s[i][11] = water - 50;
                s[i][0] = water - 50;
                s[i][0] = s[i][0] * a[2][4];
                s[i][1] = 10 * a[2][0];
                s[i][2] = 10 * a[2][1];
                s[i][3] = 10 * a[2][2];
                s[i][4] = 20 * a[2][3];
                check=a[2][4];
            }
            if (water >= 81 && water <= 100)
            {
                s[i][11] = water - 80;
                s[i][0] = water - 80;
                s[i][0] = s[i][0] * a[2][5];
                s[i][1] = 10 * a[2][0];
                s[i][2] = 10 * a[2][1];
                s[i][3] = 10 * a[2][2];
                s[i][4] = 20 * a[2][3];
                s[i][5] = 30 * a[2][4];
                check=a[2][5];
            }
            if (water >= 101 && water <= 300)
            {
                s[i][11] = water - 100;
                s[i][0] = water - 100;
                s[i][0] = s[i][0] * a[2][6];
                s[i][1] = 10 * a[2][0];
                s[i][2] = 10 * a[2][1];
                s[i][3] = 10 * a[2][2];
                s[i][4] = 20 * a[2][3];
                s[i][5] = 30 * a[2][4];
                s[i][6] = 20 * a[2][5];
                check=a[2][6];
            }
            if (water >= 301 && water <= 1000)
            {
                s[i][11] = water - 300;
                s[i][0] = water - 300;
                s[i][0] = s[i][0] * a[2][7];
                s[i][1] = 10 * a[2][0];
                s[i][2] = 10 * a[2][1];
                s[i][3] = 10 * a[2][2];
                s[i][4] = 20 * a[2][3];
                s[i][5] = 30 * a[2][4];
                s[i][6] = 20 * a[2][5];
                s[i][7] = 200 * a[2][6];
                check=a[2][7];
            }
            if (water >= 1001 && water <= 2000)
            {
                s[i][11] = water - 1000;
                s[i][0] = water - 1000;
                s[i][0] = s[i][0] * a[2][8];
                s[i][1] = 10 * a[2][0];
                s[i][2] = 10 * a[2][1];
                s[i][3] = 10 * a[2][2];
                s[i][4] = 20 * a[2][3];
                s[i][5] = 30 * a[2][4];
                s[i][6] = 20 * a[2][5];
                s[i][7] = 200 * a[2][6];
                s[i][8] = 700 * a[2][7];
                check=a[2][8];
            }
            if (water >= 2001 && water <= 3000)
            {
                s[i][11] = water - 2000;
                s[i][0] = water - 2000;
                s[i][0] = s[i][0] * a[2][9];
                s[i][1] = 10 * a[2][0];
                s[i][2] = 10 * a[2][1];
                s[i][3] = 10 * a[2][2];
                s[i][4] = 20 * a[2][3];
                s[i][5] = 30 * a[2][4];
                s[i][6] = 20 * a[2][5];
                s[i][7] = 200 * a[2][6];
                s[i][8] = 700 * a[2][7];
                s[i][9] = 1000 * a[2][8];
                check=a[2][9];
            }
            if (water > 3000)
            {
                s[i][11] = water - 3000;
                s[i][0] = water - 3000;
                s[i][0] = s[i][0] * a[2][10];
                s[i][1] = 10 * a[2][0];
                s[i][2] = 10 * a[2][1];
                s[i][3] = 10 * a[2][2];
                s[i][4] = 20 * a[2][3];
                s[i][5] = 30 * a[2][4];
                s[i][6] = 20 * a[2][5];
                s[i][7] = 200 * a[2][6];
                s[i][8] = 700 * a[2][7];
                s[i][9] = 1000 * a[2][8];
                s[i][10] = 1000 * a[2][9];
                check=a[2][10];

            }
            printf("ราคาต่อหน่วย");
            printf("        หน่วยน้ำที่ใช้");
            printf("    เป็นเงินทั้งสิ้น");
            printf("\n  (บาท)");
            printf("    คูณ");
            printf("     (ลบ.ม)");
            printf("       (บาท)");
            if (water < 11)
            {
                if (pay > 1.00)
                {
                    printf("\n  %.2f", a[2][0]);
                    printf("     *        10        %.2f", pay);
                    printf("\n                               %.2f", sp[0][0]);
                }
                printf("\nอัตตราค่าน้ำขั้นต่ำ 300 บาท/เดือน (15 ลบ.ม");
            }
            else
            {
                printf("\n");
                if (s[i][1] > 1.00)
                {
                    printf("\n  %.2f", a[2][0]);
                    printf("     *        10        %.2f", s[i][1]);
                }
                if (s[i][2] > 1.00)
                {
                    printf("\n  %.2f", a[2][1]);
                    printf("     *        10        %.2f", s[i][2]);
                }
                if (s[i][3] > 1.00)
                {
                    printf("\n  %.2f", a[2][2]);
                    printf("     *        10        %.2f", s[i][3]);
                }
                if (s[i][4] > 1.00)
                {
                    printf("\n  %.2f", a[2][3]);
                    printf("     *        20        %.2f", s[i][4]);
                }
                if (s[i][5] > 1.00)
                {
                    printf("\n  %.2f", a[2][4]);
                    printf("     *        30        %.2f", s[i][5]);
                }
                if (s[i][6] > 1.00)
                {
                    printf("\n  %.2f", a[2][5]);
                    printf("     *        20        %.2f", s[i][6]);
                }
                if (s[i][7] > 1.00)
                {
                    printf("\n  %.2f", a[2][6]);
                    printf("     *        200       %.2f", s[i][7]);
                }
                if (s[i][8] > 1.00)
                {
                    printf("\n  %.2f", a[2][7]);
                    printf("     *        700       %.2f", s[i][8]);
                }
                if (s[i][9] > 1.00)
                {
                    printf("\n  %.2f", a[2][8]);
                    printf("     *        1000      %.2f", s[i][9]);
                }
                if (s[i][10] > 1.00)
                {
                    printf("\n  %.2f", a[2][9]);
                    printf("     *        1000      %.2f", s[i][10]);
                }
                if (s[i][0] > 1.00)
                {
                if(s[i][11]>=1.00){
                    printf("\n  %.2f", check);
                    printf("     *        %.0f      %.2f" ,s[i][11],s[i][0]);
                }
                }
            }
            break;

        }
if(type >3){
    printf("กรอกข้อมูลไม่ถูกต้อง");
}else{
            pay = s[i][0] + s[i][1] + s[i][2] + s[i][3] + s[i][4] + s[i][5] + s[i][6] + s[i][7] + s[i][8] + s[i][9] + s[i][10]  + 30;
        vat = pay / 100;
        vat = vat * 7;
        sum = vat + pay;
        sum2=s[i][0] + s[i][1] + s[i][2] + s[i][3] + s[i][4] + s[i][5] + s[i][6] + s[i][7] + s[i][8] + s[i][9] + s[i][10];
        printf("\n");
        printf("\nรวมค่าน้ำ                         %.2f",sum2);
        printf("\nค่าบริการทั่วไป                     30");
        printf("\nค่าภาษีมูลค่าเพิ่ม (7%)               %.2f",vat);
        printf("\nรวมเป็นเงินทั้งสิ้น                    %.2f ", sum);
}

    }
}

