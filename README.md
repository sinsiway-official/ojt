# 신시웨이 공채 1기 OJT

## 일정

7/11(월)-16(금)

## 문의 사항

카카오톡 오픈 채팅 링크 : https://open.kakao.com/o/gFS0XCpe

## 과제

KEY ID, KEY NAME 로 호출되는 C, JAVA API 기능 검증 테스트 프로그램<br>
모든 알고리즘에 대한 라이브러리 pass, fail 테스트 및 리포트.

## 환경 구성

### 소스코드

github : https://github.com/sinsiway-official/ojt<br>
저장소에 각 사용자 별 브런치 개별 사용.<br>
<br>
저장소 commit 시 id password 입력 부분에 public password 사용.<br>
Username: dhkim(본인 이름)<br>
Password: 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<br>

### 테스트 환경

server ip : 192.168.10.94

| id      | password | 사용자 | git password                             |
| ------- | -------- | ------ | ---------------------------------------- |
| ymseo   | sinsiway | 서영민 | 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 |
| sjchoi  | sinsiway | 최서진 | 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 |
| swhwang | sinsiway | 황상원 | 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 |

### 라이브러리 경로

```bash
$ cd /tmp/ojtLibrary
$ ls
PetraCipherAPI.jar  libpcapi.so  libpcjapi.so
```

### 키 정보

| 알고리즘 | KEY ID | KEY NAME | 비고   |
| -------- | ------ | -------- | ------ |
| AES128   | 100    | AES128   | 양방향 |
| AES192   | 110    | AES192   | 양방향 |
| AES256   | 120    | AES256   | 양방향 |
| ARIA128  | 200    | ARIA128  | 양방향 |
| ARIA192  | 210    | ARIA192  | 양방향 |
| ARIA256  | 220    | ARIA256  | 양방향 |
| SEED128  | 300    | SEED128  | 양방향 |
| SEED256  | 310    | SEED256  | 양방향 |
| SHA256   | 400    | SHA256   | 단방향 |
| SHA384   | 410    | SHA384   | 단방향 |
| SHA512   | 420    | SHA512   | 단방향 |

### 테스트

```bash
$ ssh dhkim@192.168.10.94
$ git clone https://github.com/sinsiway-official/ojt.git ${HOME}/ojt

# 본인 브런치로 변경
$ cd ${HOME}/ojt
$ git checkout dhkim

# 라이브러리 복사
$ cp /tmp/ojtLibrary/* ${HOME}/ojt

# 환경 설정 및 테스트
$ . env.sh
$ sh runC.sh
$ sh runJava.sh

# git global 환경 설정
$ git config --global user.email "dhkim@sinsiway.com"
$ git config --global user.name "dhkim"

# 테스트 커밋
$ touch test.commit
$ git add test.commit
$ git commit -m 'test commit'
$ git push

(gnome-ssh-askpass:103375): Gtk-WARNING **: cannot open display:
error: unable to read askpass response from '/usr/libexec/openssh/gnome-ssh-askpass'
Username for 'https://github.com': dhkim

(gnome-ssh-askpass:103381): Gtk-WARNING **: cannot open display:
error: unable to read askpass response from '/usr/libexec/openssh/gnome-ssh-askpass'
Password for 'https://dhkim@github.com': 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

Enumerating objects: 4, done.
Counting objects: 100% (4/4), done.
Delta compression using up to 32 threads
Compressing objects: 100% (2/2), done.
Writing objects: 100% (3/3), 266 bytes | 266.00 KiB/s, done.
Total 3 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/sinsiway-official/ojt.git
   22ae7f1..e3fdd05  dhkim -> dhkim
```

## 과제 확인 항목

각 알고리즘에 대한 안전한 검증 여부.<br>
각종 예외 사항에 대한 처리 여부.
