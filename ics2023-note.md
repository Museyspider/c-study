[TOC]

# ics2023笔记

## git
https://marklodato.github.io/visual-git-guide/index-en.html

## segmentation fault
可以添加编译选项 -fsanitize=address

## makefile
make -f build.mk debug

## expr.c
输入字符串表达式,输出表达式的值(16进制),作为内存地址

## nemu执行流程
1. nemu-main.c -> init_moniter() engine_start()
2. init_moniter() -> parse_args() init_rand() init_log() init_mem() init_isa() load_img(载入程序到内存中) init_sdb( init_regex() init_wp_pool() ) welcome()
3. engine_start() -> sdb_mainloop(不停的执行命令)

## 监视点还没测,监视点的值改变会发生什么

## cpu干的事
while()