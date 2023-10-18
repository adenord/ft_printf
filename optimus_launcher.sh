# gcc optimus_tester.c srcs/ft_printf.c srcs/handling_args.c srcs/nbr_args.c srcs/display_unsigned.c srcs/display_hexa.c srcs/display_address.c libft/libft.a -I includes/ && ./a.out
gcc -w optimus_tester2.c srcs/*.c libftprintf.a -I includes
./a.out > optimus2
gcc -w optimus_tester1.c
./a.out > optimus1
xxd optimus1 > optimus1.hex
xxd optimus2 > optimus2.hex
diff optimus1.hex optimus2.hex
rm optimus1 optimus2 optimus1.hex optimus2.hex
