/*
 * ODEV1 - Programlama C ile Ogreniyorum
 * Konu Sonu Calisma Sorulari: 6.1, 6.4, 6.16, 6.22, 6.27
 * Hazirlayan: Omer Kozankurt
 * Tarih: 13.11.2025
 */

 #include <stdio.h>

 int main() {
     printf("ODEV1 Hazirlayan Omer Kozankurt\n");
     printf("------------------------------\n\n");
     
     /* ============================================
      * COZUM 6.1: Dairesel Koni Hacmi Hesaplama
      * ============================================ */
     printf("COZUM 6.1:\n");
     printf("----------\n");
     
     float yukseklik, cap, yaricap, taban_alani, hacim;
     float pi = 3.1419;
     
     // Kullanicidan yukseklik ve cap degerlerini al
     printf("Yuksekligi giriniz (cm) : ");
     scanf("%f", &yukseklik);
     
     printf("Capi giriniz (cm) : ");
     scanf("%f", &cap);
     
     // Girdi degerlerini ekrana yazdir
     printf("Girdi degerleri: yukseklik %.0f ve cap %.0f\n", yukseklik, cap);
     
     // Hacim hesaplama
     // Hacim = (1/3) * A * h
     // A (taban alani) = π * r²
     yaricap = cap / 2.0;
     taban_alani = pi * yaricap * yaricap;
     hacim = (1.0 / 3.0) * taban_alani * yukseklik;
     
     // Sonucu ekrana yazdir
     printf("Dairesel koninin hacmi: %.2f cmkuptur.\n\n", hacim);
     
     /* ============================================
      * COZUM 6.4: ASCII Art Cikti
      * ============================================ */
     printf("COZUM 6.4:\n");
     printf("----------\n");
     
     // Karakter figuru
     printf("      _ _ _\n");
     printf("     / \\@ @\\\n");
     printf("    (  =  )\n");
     printf("   / \\_ _/ \\\n");
     printf("  (  / \\  )\n");
     printf("   \\(_ _)/\n");
     printf("   /  _  \\\n");
     printf("  |  | |  |\n");
     printf("  |  | |  |\n");
     printf("  |  | |  |\n");
     printf("  (  _ _  )\n");
     printf("\n");
     
     // Hash (#) figuru
     printf("##########  ###\n");
     printf("#         # # #\n");
     printf("#         # # #\n");
     printf("#         # # #\n");
     printf("##########  ###\n");
     printf("#         # # #\n");
     printf("#         # # #\n");
     printf("#         # # #\n");
     printf("##########  ###\n");
     printf("            #\n");
     printf("           # #\n");
     printf("          #   #\n");
     printf("         #     #\n");
     printf("        #       #\n");
     printf("       #         #\n");
     printf("      #           #\n");
     printf("     #             #\n");
     printf("    #               #\n");
     printf("   #                 #\n");
     printf("  #                   #\n");
     printf(" #                     #\n");
     printf("#######################\n");
     printf("\n");
     
     /* ============================================
      * COZUM 6.16: Harmonik Ortalama
      * ============================================ */
     printf("COZUM 6.16:\n");
     printf("-----------\n");
     
     int a, b, pay, payda;
     float harmonik_ort;
     
     // Iki tamsayi degerini al
     printf("Harmonik ortalamasi alinacak degerler: ");
     scanf("%d %d", &a, &b);
     
     // Harmonik ortalama = (2*a*b)/(a+b)
     pay = 2 * a * b;
     payda = a + b;
     
     printf("2 * %d * %d = %d\n", a, b, pay);
     printf("%d + %d = %d\n", a, b, payda);
     
     harmonik_ort = (float)pay / payda;
     printf("Harmonik Ortalama = %.2f\n\n", harmonik_ort);
     
     /* ============================================
      * COZUM 6.22: Su Faturasi Hesaplama
      * ============================================ */
     printf("COZUM 6.22:\n");
     printf("-----------\n");
     
     int ilk_gosterge, son_gosterge, tuketim_miktari;
     float su_fiyati = 0.912857;
     float tuketim_tutari, atiksu_bedeli, toplam_fatura;
     
     // Sayac gostergelerini al
     printf("Ilk gostergeyi giriniz: ");
     scanf("%d", &ilk_gosterge);
     
     printf("Son gostergeyi giriniz: ");
     scanf("%d", &son_gosterge);
     
     // Hesaplamalar
     tuketim_miktari = son_gosterge - ilk_gosterge;
     tuketim_tutari = tuketim_miktari * su_fiyati;
     atiksu_bedeli = tuketim_tutari * 0.50; // %50
     toplam_fatura = tuketim_tutari + atiksu_bedeli;
     
     // Sonuclari yazdir
     printf("Tuketim miktari : %d\n", tuketim_miktari);
     printf("Tuketim tutari : %.2f\n", tuketim_tutari);
     printf("Atiksu bedeli (yuzde 50) : %.2f\n", atiksu_bedeli);
     printf("TOPLAM : %.2f TL\n\n", toplam_fatura);
     
     /* ============================================
      * COZUM 6.27: Dogru Parcasinin Orta Noktasi
      * ============================================ */
     printf("COZUM 6.27:\n");
     printf("-----------\n");
     
     float x1, y1, x2, y2, xo, yo;
     
     // Birinci noktanin koordinatlarini al
     printf("Ilk noktanin x1 y1 degerini giriniz: ");
     scanf("%f %f", &x1, &y1);
     
     // Ikinci noktanin koordinatlarini al
     printf("Ikinci noktanin x2 y2 degerini giriniz:");
     scanf("%f %f", &x2, &y2);
     
     // Orta nokta hesaplama
     // xo = (x1 + x2) / 2
     // yo = (y1 + y2) / 2
     xo = (x1 + x2) / 2.0;
     yo = (y1 + y2) / 2.0;
     
     // Hesaplamayi goster
     printf("\n");
     printf("XO = %.0f+%.0f = %.0f = %.1f\n", x1, x2, x1+x2, xo);
     printf("     ---   --\n");
     printf("      2     2\n\n");
     
     printf("YO = %.0f+%.0f = %.0f = %.1f\n", y1, y2, y1+y2, yo);
     printf("     ---   --\n");
     printf("      2     2\n\n");
     
     return 0;
 }
 
 
