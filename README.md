*This project has been created as part of the 42 curriculum by etasci.*

# ft_printf

## Proje Açıklaması(Description)
C dilindeki standart `printf` fonksiyonunun temel özelliklerini yeniden yazma projesi.
Amaç: variadic functions, format parsing ve `write()` kullanımı öğrenmek.

---

## Desteklenen Formatlar
`%c %s %p %d %i %u %x %X %%`

---
## Talimatlar(Instructions)
## Derleme
```bash
make        # kütüphaneyi derler
make clean  # object dosyalarını siler
make fclean # object ve kütüphaneyi siler
make re     # temiz derleme yapar

##Dosya kullanımı
.
├── ft_printf.c
├── ft_handle_format.c
├── ft_putchar.c
├── ft_putstr.c
├── ft_putnbr.c
├── ft_putunsigned.c
├── ft_puthex.c
├── ft_putptr.c
├── ft_printf.h
├── Makefile
└── README.md

##Kaynaklar(Resources)
42 Curriculum Projesi Talimatları – ft_printf proje yönergeleri

C Standard Library Documentation – printf, write, va_list vs.

GeeksforGeeks / cplusplus.com – Variadic functions ve format string örnekleri

Stack Overflow – Hataları çözmek veya edge-case senaryoları öğrenmek

YouTube / Bloglar – Format parsing ve ft_printf örnek anlatımlar

##Yapay Zeka Kullanımı

Bu proje geliştirilirken yapay zeka araçları şu amaçlarla kullanılmıştır:

Variadic fonksiyonların mantığını anlamak

Format parsing algoritmasını anlamak

Hata ayıklama ve edge-case senaryolarını test etmek
