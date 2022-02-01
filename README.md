# HelloGitHub

![image](https://user-images.githubusercontent.com/62002485/134600165-c256f4cd-3c3f-43c3-acad-6f08c46c1e9c.png)

<br>

##  1. Version Control System – VCS là gì?
VCS là viết tắt của `Version Control System` là hệ thống kiểm soát các phiên bản phân tán mã nguồn mở. Các VCS sẽ lưu trữ tất cả các file trong toàn bộ dự án và ghi lại toàn bộ lịch sử thay đổi của file. Mỗi sự thay đổi được lưu lại sẽ được và thành một version (phiên bản).


<br>

## 2. Git là gì?
Git là một hệ thống quản lý phiên bản phân tán `(Distributed Version Control System)`. Hiểu nôm na rằng Git là 1 hệ thống giúp cho việc quản lý tài liệu, source code... của 1 nhóm các developer cùng làm chung dự án. Git sẽ ghi nhớ lại toàn bộ lịch sử thay đổi của source code trong dự án. Bạn sửa file nào, thêm dòng code nào, xóa dòng code nào, bỏ thừa dấu ở đâu... tất cả các hành động đều được Git ghi lại. Qua đó giúp dự án có thể điều tra nguyên nhân gây lỗi hệ thống, tổng hợp code trở nên dễ dàng hơn.

<br>

## 3. Repository?
- Repository: Repository hiểu đơn giản nó chính là cái kho lưu trữ tất cả những thông tin cần thiết để quản lý các sửa đổi và lịch sử của toàn bộ project. Repository của Git được phân thành 2 loại là remote repository và local repository.

  - Local Repository: là repository nằm trên chính `máy tính của chúng ta`, repository này sẽ đồng bộ hóa với remote repository bằng các lệnh của git.
  - Remote Repository: là repository được cài đặt trên `server chuyên dụng`. Ví dụ: `GitHub`, GitLab, Bitbucket,...

- Working tree: là những thư mục được đặt trong sự quản lý của Git, nơi mọi người thực hiện công việc trên đó.
- Index (hoặc staging area):  Giữa repository và working tree tồn tại một nơi gọi là index hay staging area, là nơi để chuẩn bị cho việc commit vào repository.

![image](https://user-images.githubusercontent.com/62002485/134599990-83899a1b-85ac-4e19-a651-b7f60732cc6b.png)

  
<br>

## 4. Câu lệnh Git:

- git --version
- git config --global user.name "NguyenMyQuynh"
- git config --global user.email 19520241@gm.uit.edu.vn

<br>

- git init
- git remote add origin https://github.com/NguyenMyQuynh/AboutGit.git

<br>

- git clone repo default branch `https://github.com/NguyenMyQuynh/AboutGit.git`
or specific branch: 

![image](https://user-images.githubusercontent.com/62002485/140679106-46e9a84a-6fa6-486e-9a10-da16b3538d49.png)

<br>// cd into repo_folder, to do sth ...
- git status (cho bạn biết được những file mình đã thêm(add), sửa (modified) và xoá (deleted).)
![image](https://user-images.githubusercontent.com/62002485/134591407-6b015d52-5250-4ad2-9de0-56e064fc9fa3.png)
- git add .
- git add <path_to_file>
- git commit -m "Commit message"
- git branch <branch_name>
- git checkout <branch_name>
- git push -f origin <branch_name>
- git pull 

<br>

- git log --oneline (in ra các commit dã thực hiện)
- git revert HEAD
- git reset <status> (xóa file khỏi staging area nhung vẫn còn trên working directory)
- git fetch (Lệnh git fetch tìm nạp các bản sao và tải xuống tất cả các tệp branch vào máy tính của bạn. Sử dụng nó để lưu các thay đổi mới nhất vào kho lưu trữ của bạn. Nó có thể tìm nạp nhiều branch cùng một lúc.)

## 5. Fix bug git:
  - https://ebudezain.com/fix-loi-logon-failed-use-ctrl+c-to-cancel-basic-credential-prompt
  - remote: Repository not found: 
  ``` Control Panel -> Credential Manager -> Windows credentials -> GitHub account -> Remove. ```
  - Lỗi Permission 403: kiểm tra phiên đăng nhập trên browser có đúng account tương ứng dang thao tác trên máy local không.  
