![42r](https://github.com/adenord/libft/assets/20702781/a66bf83a-800d-4e1a-9bf3-9d9d821d4070)

<div align=center><h1>ft_printf 🛠️</h1>
<i>Because putnbr and putstr aren’t enough - 42 project</i></div>
<p align="center">
<img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white">
<img alt="number of lines" src="https://tokei.rs/b1/github/adenord/ft_printf">
<img alt="GitHub repo size" src="https://img.shields.io/github/repo-size/adenord/ft_printf">
<img alt="GitHub language count" src="https://img.shields.io/github/languages/count/adenord/ft_printf">
<img alt="Neovim" src="https://img.shields.io/badge/NeoVim-%2357A143.svg?&style=for-the-badge&logo=neovim&logoColor=white">
</p>
<h2>Index 📍</h2>
<ul>
  <li><a href="#libft">What is ft_printf ? 👨‍💻</a></li>
  <li><a href="#mandatory">Mandatory and bonus parts ⌨️</a></li>
  <li><a href="#usage">Usage 👷</a></li>
</ul>

<h2 id="libft">What is ft_printf ? 👨‍💻</h2>
<p>What the subjects says :</p>
<blockquote>
This project is pretty straight forward. You will recode printf. Hopefully you will be able to reuse it in future projects without the fear of being flagged as a cheater. You will mainly learn how to use variadic arguments.
</blockquote>
<div><pre><code>"printf" is a function in C language which allows you to write on the standard output some formatted text.
The versatility of the printf function in C represents a great exercise in programming. 
It will enable you to discover variadic functions in C.
The key to a successful ft_printf is a well-structured and good extensible code.
</code></pre></div>
<p>For further information you can take a look at the <a alt="subject" href="https://github.com/adenord/ft_printf/blob/main/ft_printf.pdf"><strong>subject</strong></a>.</p>
<h2 id="mandatory">Mandatory and bonus parts ⌨️</h2>
<blockquote>
This project works for both mandatory and bonus part.
</blockquote>
<p>Here's the expectations about the mandatory part of the project :</p>
<ul>
  <li><strong>%c</strong> print a single character.</li>
  <li><strong>%s</strong> print a string of characters.</li>
  <li><strong>%p</strong> The void * pointer argument is printed in hexadecimal.</li>
  <li><strong>%d</strong> print a decimal (base 10) number.</li>
  <li><strong>%i</strong> print an integer in base 10.</li>
  <li><strong>%u</strong> print an unsigned decimal (base 10) number.</li>
  <li><strong>%x</strong> print a number in hexadecimal (base 16), with lowercase.</li>
  <li><strong>%X</strong> print a number in hexadecimal (base 16), with uppercase.</li>
  <li><strong>%%</strong> print a percent sign.</li>
</ul>

<p>About the bonus part ⭐️</p>
<ul>
  <li>
Manage any combination of the following flags: <strong>’-0.’</strong> and minimum field width with all conversions.
</li>
  <li>Manage all the following flags: <strong>’# +’</strong>.</li>
</ul>


<h2 id="usage">Usage 👷</h2>
<p>Some examples</p>
<div><pre><code>int main(void)
{
    ft_printf("This is a test\n");
    ft_printf("This is a %s\n", "test");
    ft_printf("This is the test number %d\n", 42);
    ft_printf("This is another test number %x\n", 255);
    ft_printf("The address of this pointer is %p\n", &ptr);
}
</code></pre></div>
<p>Output :</p>
<div><pre><code>./a.out
This is a test
This is a test
This is the test number 42
This is another test number ff
The address of this pointer is 0x16b10b320
</code></pre></div>
