

# İş Planlama ve Makine Geçiş Optimizasyonu

Bu proje, bir dizi işi, birden fazla makine üzerinde işleyerek, işlenme sürelerini ve makine geçiş maliyetlerini hesaba katarak toplam minimum süreyi bulmayı amaçlar.  
Çözüm, dinamik programlama tekniği kullanılarak geliştirilmiştir.

## 📋 Problem Tanımı

- `n` adet iş ve `m` adet makine bulunmaktadır.
- Her işin her makinede işlenmesi farklı sürelerde tamamlanır (`time[i][j]`).
- İşler arasında makine değiştirildiğinde ek bir geçiş maliyeti oluşur (`cost[i][j]`).
- Amaç:
  - İşleri sırasıyla işlemek.
  - Makine geçişlerini ve işlenme sürelerini dikkate alarak toplam süreyi minimize etmektir.

## 🔧 Kullanılan Teknolojiler

- C programlama dili
- Temel input/output işlemleri
- Dinamik Programlama

## 🚀 Çalıştırma Adımları

1. Proje dosyasını indirin veya klonlayın:
   ```bash
   git clone https://github.com/kullaniciadi/proje-adi.git
   ```

2. Derleyin:
   ```bash
   gcc main.c -o is_planlama
   ```

3. Programı çalıştırın:
   ```bash
   ./is_planlama
   ```

4. Kullanıcıdan sırasıyla şu veriler istenir:
   - İş sayısı (`n`)
   - Makine sayısı (`m`)
   - Her işin her makinedeki işlenme süresi (`time` matrisi)
   - Makine geçiş maliyetleri (`cost` matrisi)

5. Program minimum toplam süreyi ekrana yazdırır.

## 📈 Örnek Kullanım

```text
Is sayisini girin: 2
Makine sayisini girin: 2
Islerin makinelere gore islenme surelerini girin:
3 5
2 4
Makine gecis maliyetlerini girin:
0 1
1 0
Minimum toplam sure: 5
```

## 📚 Açıklamalar

- `time[i][j]`: `i`. işin `j`. makinedeki işlenme süresi.
- `cost[i][j]`: `i`. makinadan `j`. makinaya geçişin maliyeti.
- `dp[i][j]`: İlk `i` işin sonunda `j` makinede olmanın minimum toplam süresi.

**Dinamik programlama** yaklaşımıyla her adımda en iyi (minimum) seçenekler biriktirilerek finalde en düşük toplam süre elde edilir.

## ✨ Geliştirme Fikirleri

- İş/makine sayılarını sınırlandırarak daha güvenli input alınması.
- İşlem adımlarını (hangi makinelerde çalışıldığı gibi) detaylı şekilde ekrana yazdırmak.
- Farklı algoritmalarla karşılaştırmalı performans analizi yapmak.

## 📄 Lisans

Bu proje açık kaynaklıdır. İstediğiniz gibi kullanabilir veya geliştirebilirsiniz.

