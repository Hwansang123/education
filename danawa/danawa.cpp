#include "danawa.h"
#include "ui_danawa.h"

danawa::danawa(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::danawa)
{
    ui->setupUi(this);

    QSqlDatabase mydb = QSqlDatabase :: addDatabase("QSQLITE"); //생성자가 호출되있을 때 데이터 베이스 연결
    mydb.setDatabaseName("C:/Users/user/Desktop/QT/danawa.db");

    if(!mydb.open())
        ui->label->setText("fail datebase");
    else{
        ui->label->setText("connect");
    }

    ui->page_1_ad2->setTextFormat(Qt::RichText);
    ui->page_1_ad2->setText("<a href=\"http://direct.samsungfire.com/ria/pc/product/car/?state=Front\" "
                            "style=\"text-decoration: none;\" "
                            ">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</a>");
    ui->page_1_ad2->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->page_1_ad2->setOpenExternalLinks(true);

    ui->page_2_ad2->setTextFormat(Qt::RichText);
    ui->page_2_ad2->setText("<a href=\"http://direct.samsungfire.com/ria/pc/product/car/?state=Front\" "
                            "style=\"text-decoration: none;\" "
                            ">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</a>");
    ui->page_2_ad2->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->page_2_ad2->setOpenExternalLinks(true);

    ui->page_3_ad2->setTextFormat(Qt::RichText);
    ui->page_3_ad2->setText("<a href=\"http://direct.samsungfire.com/ria/pc/product/car/?state=Front\" "
                            "style=\"text-decoration: none;\" "
                            ">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</a>");
    ui->page_3_ad2->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->page_3_ad2->setOpenExternalLinks(true);
//--------------------------------------------------------------광고넣기

    ui->HD_home->setTextFormat(Qt::RichText);
    ui->HD_home->setText("<a href=\"https://www.hyundai.com/kr/ko/e/?state=Front\" "
                            "style=\"text-decoration: none;\">홈페이지</a>");
    ui->HD_home->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->HD_home->setOpenExternalLinks(true);


    ui->KIA_home->setTextFormat(Qt::RichText);
    ui->KIA_home->setText("<a href=\"https://www.kia.com/kr/?state=Front\" "
                         "style=\"text-decoration: none;\">홈페이지</a>");
    ui->KIA_home->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->KIA_home->setOpenExternalLinks(true);










    QPixmap image1("C:/Users/user/Desktop/QT/qqq/999.PNG"); //로그인버튼
    QPixmap image2("C:/Users/user/Desktop/QT/qqq/1010.PNG"); // 확인 버튼
    QPixmap image3("C:/Users/user/Desktop/QT/qqq/1111.PNG"); // 회원가입버튼
    QPixmap image4("C:/Users/user/Desktop/QT/qqq/888.PNG"); //로고
    // ui->page_5_logo->setIcon(QIcon(image4));
    // ui->page_5_logo->setIconSize(image4.size());
    // ui->page_6_logo->setIcon(QIcon(image4));
    // ui->page_6_logo->setIconSize(image4.size());
    // ui->page_7_logo->setIcon(QIcon(image4));
    // ui->page_7_logo->setIconSize(image4.size());
    // ui->page_8_logo->setIcon(QIcon(image4));
    // ui->page_8_logo->setIconSize(image4.size());
    // ui->page_9_logo->setIcon(QIcon(image4));
    // ui->page_9_logo->setIconSize(image4.size());
    // ui->page_10_logo->setIcon(QIcon(image4));
    // ui->page_10_logo->setIconSize(image4.size()); //로고 넣기

    // ui->page_5_login_btn->setIcon(QIcon(image1));
    // ui->page_5_login_btn->setIconSize(image1.size()); //로그인버튼에 이미지 넣기

    // ui->page_6_menber_btn ->setIcon(QIcon(image3));
    // ui->page_6_menber_btn->setIconSize(image3.size()); //회원가입버튼에 이미지 넣기

    // ui->page_7_id_find_btn ->setIcon(QIcon(image2));
    // ui->page_7_id_find_btn ->setIconSize(image2.size()); //확인버튼에 이미지 넣기
    // ui->page_8_pw_find_btn ->setIcon(QIcon(image2));
    // ui->page_8_pw_find_btn ->setIconSize(image2.size()); //확인버튼에 이미지 넣기
    // ui->page_9_term_check ->setIcon(QIcon(image2));
    // ui->page_9_term_check ->setIconSize(image2.size()); //확인버튼에 이미지 넣기
    // ui->page_10_coll_check ->setIcon(QIcon(image2));
    // ui->page_10_coll_check ->setIconSize(image2.size()); //확인버튼에 이미지 넣기
    //------------------------------------------------------------------------------------ 이미지 넣기


    //--------------------------------------------------------------------------------- 브렌드 아이콘 넣기
    // QMovie *movie = new QMovie("C:/Users/user/Desktop/QT/qqq/222.gif"); //움직이는 거
    // ui->page_5_Background->setMovie(movie);
    // ui->page_6_Background->setMovie(movie);
    // ui->page_7_Background->setMovie(movie);
    // ui->page_8_Background->setMovie(movie);
    // ui->page_9_Background->setMovie(movie);
    // ui->page_10_Background->setMovie(movie);
    // movie->start();


    ui->comboBox_1->setStyleSheet("border : 1px solid black;");
    ui->comboBox_2->setStyleSheet("border : 1px solid black;");

    ui->comboBox_4->setStyleSheet("border : 1px solid black;");
    ui->comboBox_5->setStyleSheet("border : 1px solid black;");
    ui->comboBox_6->setStyleSheet("border : 1px solid black;");
    ui->comboBox_7->setStyleSheet("border : 1px solid black;");
    ui->comboBox_8->setStyleSheet("border : 1px solid black;");
    ui->comboBox_9->setStyleSheet("border : 1px solid black;");
    ui->comboBox_10->setStyleSheet("border : 1px solid black;");
    ui->comboBox_11->setStyleSheet("border : 1px solid black;");
    ui->comboBox_12->setStyleSheet("border : 1px solid black;");
    ui->comboBox_13->setStyleSheet("border : 1px solid black;");

    ui->inquirybtn_1->setStyleSheet("border : 1px solid black;");
    ui->inquirybtn_2->setStyleSheet("border : 1px solid black;");
    ui->inquirybtn_3->setStyleSheet("border : 1px solid black;");
    ui->inquirybtn_4->setStyleSheet("border : 1px solid black;");








}










void danawa :: login_clicked(){ //로그인화면 로그인 성공하면 화면이동 넣어야함
    id = ui->page_5_id_label->text();
    pw = ui->page_5_pw_label->text();
    QSqlQuery query;
    query.prepare("SELECT * FROM user_info WHERE id = :id AND pw = :pw");
    query.bindValue(":id",id);
    query.bindValue(":pw",pw);
    if(query.exec() && query.next()){ //쿼리문 실행하고 진행이 된다면 참 아니면 거짓
        QMessageBox::information(this, "로그인", "로그인에 성공했습니다");
        ui->page_5_id_label->clear();
        ui->page_5_pw_label->clear();
        //이제 로그인 후에 페이지 넘어가는 거 넣어야함
    }
    else{
        QMessageBox::information(this, "로그인", "회원 정보가 일치하지 않습니다");
        ui->page_5_id_label->clear();
        ui->page_5_pw_label->clear();
    }
}

void danawa::slot_checkID() //아이디 중복검사
{
    QString input_id = ui->page_6_id->text(); // 라인 에딧으로 입력한 값을 변수에 저장

    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM user_info WHERE id = :inputId");
    query.bindValue(":inputId", input_id);
    if (query.exec() && query.next()) {
        int count = query.value(0).toInt(); //puery.value(0)은 첫번째 열의 값

        if (count > 0) { // 중복 일때
            QMessageBox::critical(this, "주의", "이미 사용 중인 ID입니다.");
            ui->page_6_id->clear();
        }
    } else {
        qDebug() << "Query failed:" << query.lastError();
    }
}

void danawa::slot_checkPW2() //비밀번호 재확인
{
    QString password1 = ui->page_6_pw1->text();
    QString password2 = ui->page_6_pw2->text();
    if (password1 != password2) {  //비밀번호가 일치 하지 않을 때
        QMessageBox::critical(this, "비밀번호 확인", "비밀번호가 일치하지 않습니다.");
        ui->page_6_pw2->clear();
    }
}

void danawa ::slot_phone() { //회원가입시 전화번호 중복검사
    Phone = ui->page_6_phone->text(); // 라인 에딧으로 입력한 값을 변수에 저장

    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM user_info WHERE phone = :phone");
    query.bindValue(":phone", Phone);
    if (query.exec() && query.next()) {
        int count = query.value(0).toInt();

        if (count > 0) { // 중복 일때
            QMessageBox::critical(this, "주의", "이미 사용 중인 전화번호입니다.");
            ui->page_6_phone->clear();
        }
    }
}

void danawa ::slot_e_mail() //회원가입시 email 중복검사
{
    e_mail = ui->page_6_e_mail->text(); // 라인 에딧으로 입력한 값을 변수에 저장
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM user_info WHERE e_mail = :e_mail");
    query.bindValue(":e_mail", e_mail);
    if (query.exec() && query.next()) {
        int count = query.value(0).toInt();
        if (count > 0) { // 중복 일때
            QMessageBox::critical(this, "주의", "이미 사용 중인 이메일입니다..");
            ui->page_6_e_mail->clear();
        }
    }
}

void danawa::slot_member() //회원가입버튼 클릭시
{
    name = ui->page_6_name->text(); // 라인 에딧으로 입력한 값을 변수에 저장
    id = ui->page_6_id->text(); // 라인 에딧으로 입력한 값을 변수에 저장
    pw = ui->page_6_pw1->text(); // 라인 에딧으로 입력한 값을 변수에 저장
    Phone = ui->page_6_phone->text(); // 라인 에딧으로 입력한 값을 변수에 저장
    e_mail = ui->page_6_e_mail->text(); // 라인 에딧으로 입력한 값을 변수에 저장

    QSqlQuery query;
    query.prepare("INSERT INTO user_info (name, id, pw, phone, e_mail) VALUES (:name, :id, :pw, :phone, :e_mail)");
    query.bindValue(":name", name);
    query.bindValue(":id", id);
    query.bindValue(":pw", pw);
    query.bindValue(":phone", Phone);
    query.bindValue(":e_mail", e_mail);

    if(ui->page_6_name->text().isEmpty() ||ui->page_6_id->text().isEmpty()||ui->page_6_pw1->text().isEmpty()||ui->page_6_pw2->text().isEmpty() ||ui->page_6_phone->text().isEmpty() ||ui->page_6_e_mail->text().isEmpty())
        QMessageBox::information(this,"알림", "모든 항목을 입력해주세요");
    else if(!ui->page_6_check1->isChecked() || !ui->page_6_check2->isChecked()){
        QMessageBox::information(this,"알림", "필수 약관 동의를 해주세요");
    }
    else {
        if(query.exec()) {
            ui->page_6_name->clear();
            ui->page_6_id->clear();
            ui->page_6_pw1->clear();
            ui->page_6_pw2->clear();
            ui->page_6_phone->clear();
            ui->page_6_e_mail->clear(); //써있는 내용 지우기
            QMessageBox::information(this, "회원가입", "회원가입 성공.");
            ui->stackedWidget->setCurrentIndex(0);
        }
    }
}

void danawa::slot_ID_Find() // ID 찾기
{
    //id 찾는 로직
    name = ui->page_7_name->text();
    Phone = ui->page_7_phone->text();
    e_mail = ui->page_7_email->text();
    QSqlQuery query;
    query.prepare("SELECT id FROM user_info WHERE name = :name AND phone = :phone AND e_mail = :e_mail");
    query.bindValue(":name", name);
    query.bindValue(":phone", Phone);
    query.bindValue(":e_mail", e_mail);
    if(query.exec() && query.next()){
        QString find_id = query.value(0).toString();
        QMessageBox::information(this, "아이디 찾기", "등록된 아이디는 " + find_id + " 입니다");
        ui ->page_7_name->clear();
        ui ->page_7_phone->clear();
        ui ->page_7_email->clear();
        ui->stackedWidget->setCurrentIndex(4);
    }
    else{
        QMessageBox::information(this, "아이디 찾기", "등록된 정보가 없습니다.");
        ui ->page_7_name->clear();
        ui ->page_7_phone->clear();
        ui ->page_7_email->clear();
    }
}

void danawa :: slot_PW_Find() // PW 찾기 완료?
{
    //pw 찾는 로직
    id = ui->page_8_id->text();
    Phone = ui->page_8_phone->text();
    e_mail = ui->page_8_email->text();
    QSqlQuery query;
    query.prepare("SELECT pw FROM user_info WHERE id = :id AND phone = :phone AND e_mail = :e_mail");
    query.bindValue(":id", id);
    query.bindValue(":phone", Phone);
    query.bindValue(":e_mail", e_mail);

    if(query.exec() && query.next()){
        QString find_pw = query.value(0).toString();
        QMessageBox::information(this, "비밀번호 찾기", "등록된 비밀번호는 " + find_pw + " 입니다");
        ui -> page_8_id ->clear();
        ui -> page_8_phone ->clear();
        ui -> page_8_email->clear();
        ui -> stackedWidget->setCurrentIndex(4);

    }
    else{
        QMessageBox::information(this, "비밀번호 찾기", "등록된 정보가 없습니다");
        ui -> page_8_id ->clear();
        ui -> page_8_phone ->clear();
        ui -> page_8_email->clear();
    }
}








void danawa :: car_info(){ //자동차 버튼 누르면 백과 정보
    ui->stackedWidget->setCurrentIndex(2);
    QString aa = ui -> car_info_Group->checkedButton()->text(); //그룹화버튼

    QSqlQuery query;
    if (query.exec("SELECT * FROM car_info WHERE 모델 = '" + aa + "'")) {
        if (query.next()) {
            QString a = query.value(1).toString();
            QString b = query.value(2).toString();
            QString c = query.value(3).toString();
            QString d = query.value(4).toString();
            QString e = query.value(5).toString();
            QString f = query.value(6).toString();
            QString g = query.value(7).toString();

            QPixmap car("C:/Users/user/Desktop/QT/qqq/"+aa+".PNG");
            ui->car_info_1->setPixmap(car);



            ui->car_info_2->setText(a); //모델이름표기
            ui->car_info_2->setAlignment(Qt::AlignCenter); //모델이름 가운대 정렬
            ui->car_info_3->setText(b); //가격표기
            ui->car_info_4->setText(c); // 최저가표기
            ui->car_info_5->setText(d); //출시일 표기
            ui->car_info_6->setText(e); // 차종 표기
            ui->car_info_7->setText(f); // 연료 표기
            ui->car_info_8->setText(g); // 연비 표기
        }
    }



    connect(ui->RED_btn, &QPushButton::clicked, [=]() {
        QPixmap color("C:/Users/user/Desktop/QT/qqq/"+aa+"_red.PNG");
        ui->car_info_1->setPixmap(color);
    });

    connect(ui->BLACK_btn, &QPushButton::clicked, [=]() {
        QPixmap color("C:/Users/user/Desktop/QT/qqq/"+aa+"_black.PNG");
        ui->car_info_1->setPixmap(color);
    });

    connect(ui->WHITE_btn, &QPushButton::clicked, [=]() {
        QPixmap color("C:/Users/user/Desktop/QT/qqq/"+aa+"_white.PNG");
        ui->car_info_1->setPixmap(color);
    });
    connect(ui->GRAY_btn, &QPushButton::clicked, [=]() {
        QPixmap color("C:/Users/user/Desktop/QT/qqq/"+aa+"_gray.PNG");
        ui->car_info_1->setPixmap(color);
    });



}
























void danawa :: Move_P1_stackedWidget_1(){
    ui->stackedWidget_3->setCurrentIndex(0);
}
void danawa :: Move_P1_stackedWidget_2(){
    ui->stackedWidget_3->setCurrentIndex(1);
}
void danawa :: Move_P1_stackedWidget_3(){
    ui->stackedWidget_2->setCurrentIndex(0);
}
void danawa :: Move_P1_stackedWidget_4(){
    ui->stackedWidget_2->setCurrentIndex(1);
}
void danawa :: Move_P1_stackedWidget_5(){
    ui->stackedWidget_4->setCurrentIndex(0);
}
void danawa :: Move_P1_stackedWidget_6(){
    ui->stackedWidget_4->setCurrentIndex(1);
}
void danawa :: Move_P1_stackedWidget_7(){
    ui->stackedWidget_5->setCurrentIndex(0);
}
void danawa :: Move_P1_stackedWidget_8(){
    ui->stackedWidget_5->setCurrentIndex(1);
}
void danawa :: Move_P2_stackedWidget_1(){
    ui->stackedWidget_6->setCurrentIndex(0);
}
void danawa :: Move_P2_stackedWidget_2(){
    ui->stackedWidget_6->setCurrentIndex(1);
}




void danawa ::Move_Page0(){

    ui->stackedWidget->setCurrentIndex(0);
}
void danawa ::Move_Page1(){
    ui->stackedWidget->setCurrentIndex(1);
}
void danawa ::Move_Page2(){
    ui->stackedWidget->setCurrentIndex(2);
}


void danawa :: Move_Page4(){
    ui->stackedWidget->setCurrentIndex(4);

}


void danawa :: Move_Page5(){
    ui->stackedWidget->setCurrentIndex(5);
}
void danawa ::Move_Page6(){
    ui->stackedWidget->setCurrentIndex(6);
}
void danawa ::Move_Page7(){
    ui->stackedWidget->setCurrentIndex(7);
}
void danawa ::Move_Page8(){
    ui->stackedWidget->setCurrentIndex(8);
}
void danawa ::Move_Page9(){
    ui->stackedWidget->setCurrentIndex(9);
}



void danawa ::D_HD_Btn(){
    ui->stackedWidget_7->setCurrentIndex(0);
}

void danawa :: D_KIA_Btn(){
    ui->stackedWidget_7->setCurrentIndex(1);
}

void danawa :: D_GENESIS_Btn(){
    ui->stackedWidget_7->setCurrentIndex(2);
}


danawa::~danawa()
{
    delete ui;
}
