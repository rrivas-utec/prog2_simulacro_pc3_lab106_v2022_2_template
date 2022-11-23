//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "PC3.h"
using namespace std;

static void test_1(){
    html_t html;

    header_t header("\t");
    text_t text_1("\t\tTexto 1\n");
    header.add_element(&text_1);

    body_t body("\t");
    text_t text_2("\t\tTexto 2\n");
    body.add_element(&text_2);

    html.add_body(body);
    html.add_header(header);

    html.save_to("test_1.txt");
    ifstream file("test_1.txt");
    string line;
    while(getline(file, line)) {
        cout << line << endl;
    }
}


static void test_2(){
    html_t html;

    header_t header("\t");

    body_t body("\t");
    text_t text_1("\t\tTexto 1\n");
    text_t text_2("\t\tTexto 2\n");
    text_t text_3("\t\tTexto 3\n");
    body.add_element(&text_1);
    body.add_element(&text_2);
    body.add_element(&text_3);

    html.add_body(body);
    html.add_header(header);

    html.save_to("test_2.txt");
    ifstream file("test_2.txt");
    string line;
    while(getline(file, line)) {
        cout << line << endl;
    }
}

TEST_CASE("Question #1_1") {
    execute_test("test_1_1.in", test_1);
}
TEST_CASE("Question #1_2") {
    execute_test("test_1_2.in", test_2);
}