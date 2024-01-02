[TOC]
# git与github
> 相关 gitlib gitee  awesome c

## git相关学习网站
[git沙盒](https://onlywei.github.io/explain-git-with-d3/)
[git原理可视化](https://ndpsoftware.com/git-cheatsheet.html#loc=index;)

## git中的一些基本命令
```
git clone  从github中拿下别人的项目
git commit 才会把文件提交到当前分支中去(一个版本记录)
git push   提交到GitHub中
git pull   从github拿下代码
git merge  将一个分支合并到另一个分支
git reset  回到我commit的之前的版本
git checkout 从当前节点在创建一个分支
git add  将某文件从工作区放到暂存区 (放到暂存区的文件才会被git追踪,git commit只会提交在暂存区的文件)
git commit 
```
## 工作区
可以简单理解为我的项目目录 中的各文件

## 暂存区
通过git add 命令将 文件添加到暂存区

## 本地仓库
也就是目录下的.git文件  有分支信息等

git commit 将暂存区的文件提交到本地仓库中

.git文件中可存在多个分支,每个分支中有该分支的git commit信息

## github仓库
git clone  拿下别人的一个项目
git pull 我在当前项目的开发中, 拿下当前分支的项目
git push 将当前分支的项目发布到github上

## 创建一个仓库并用git管理项目
1. 在github中创建一个仓库
2. 在本地创建一个文件夹,并用vscode打开
3. 在该文件夹目录下输入以下命令
   1. git init
   2. git branch -M main  ==运行 git branch -M main 将当前分支（通常是 "master"）重命名为 "main"。==
   3. git remote add origin https://github.com/Museyspider/first.git ==这个命令将指定的 URL 设置为名为 "origin" 的远程仓库。==
   4. 创建README.md文件  git add README.md
   5. git commit
   6. ***git push -u origin main*** ==将本地仓库的主分支推送到远程仓库origin中==
> tips:
>  - ==每次要编写代码前请先 ***git pull***, 编写完了一定要 ***git push***==
>  - git add .     git add *.txt  添加多个文件到暂存区
>  - 本地创建的新分支 提交到远程仓库 远程仓库会创建该分支 ==git push -u origin pa0== 远程仓库会创建pa0这个分支

## 关于git reset的一些命令
```
git reset HEAD file.txt
这将撤销对 `file.txt` 的暂存更改，让它回到工作目录中的状态。

git reset --soft HEAD~1
这将把HEAD指向之前的一个提交，并保留之前的更改。

git reset --mixed HEAD~1
这将把HEAD指向之前的一个提交，并取消暂存的更改，但保留这些更改。

git reset --hard HEAD~1
这将把HEAD指向之前的一个提交，并且丢弃之后的更改。
```