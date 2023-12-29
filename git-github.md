gitlib gitee
awesome c

git clone
git commit
git push   提交到GitHub中
git pull
git merge
git reset  回到我commit的之前的版本
git checkout 从当前节点在创建一个分支

git add  将某文件从工作区放到暂存区 (放到暂存区的文件才会被git追踪)
git commit 才会把文件提交到当前分支中去(一个版本记录)

## 工作区

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