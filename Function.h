#pragma once

struct Matrix2x2
{
	float m[2][2];
};

struct Vector2
{
	float x;
	float y;
};

struct Box {
	Vector2 pos;
	int W;
	int H;
};


static Matrix2x2 B;

static Matrix2x2 A;

//float mat;

//1.�s��̉��@
Matrix2x2 Add(Matrix2x2 matrix1, Matrix2x2 matrix2);

//2.�s��̌��@
Matrix2x2 Subtract(Matrix2x2 matrix1, Matrix2x2 matrix2);

//3.�s��̐�
Matrix2x2 Multiply(Matrix2x2 matrix1, Matrix2x2 matrix2);

//4.�x�N�g���ƍs��̐�
Vector2 Multiply(Vector2 vecter, Matrix2x2 matrix);



//�\���̊֐���
static const int kRowHeight = 20;
//static const int kColumnWidth = 44;

void MatrixScreenPrintf(int x, int y, Matrix2x2 matrix);
void VectorScreenprintf(int x, int y, Vector2 vector);


Matrix2x2 MakeRotateMatrix(float theta);

float ToWorld(float y);


struct Matrix3x3 {
	float m[3][3];
};


Matrix3x3 MaketranslateMatrix(Vector2 translate);

Vector2 Transform(Vector2 vector, Matrix3x3 matrix);

Matrix3x3 MakeRotateMatrix3x3(float theta);

Matrix3x3 Multiply(Matrix3x3 matrix1, Matrix3x3 matrix2);

Matrix3x3 MakeScaleMatrix(Vector2 scale);

Matrix3x3 MakeAffineMatrix(Vector2 scale ,float theta, Vector2 translate);

//2x2�t�s������߂�
Matrix2x2 Inverse(Matrix2x2 matrix);
//3x3�t�s������߂�
Matrix3x3 Inverse3x3(Matrix3x3 matrix);

void MatrixScreenPrintf3x3(int x, int y, Matrix3x3 matrix);


Matrix2x2 MatrixMultiply(float num, Matrix2x2 matrix);
Matrix3x3 MatrixMultiply3x3(float num, Matrix3x3 matrix);

Matrix2x2 Transpose(Matrix2x2 matrix);
Matrix3x3 Transpose(Matrix3x3 matrix);

Matrix3x3 MakeOrthographicMatrix(float left, float top, float right, float bottom);
Matrix3x3 MakeViewposrtMatrix(float left, float top, float width, float height);

void DrawQuad(Vector2 leftTop,Vector2 rightTop,Vector2 LeftBottom,Vector2 rightBottom,Vector2 scale,int color,int texturHundle);

struct Vector3
{
	float x, y, z;
};

//���Z
Vector3 Add(const Vector3& v1, const Vector3& v2);
//���Z
Vector3 Subtract(const Vector3& v1, const Vector3& v2);
//�X�J���[�{
Vector3 Multiply(float scalar, const Vector3& v);
//����
float Dot(const Vector3& v1,const Vector3& v2);
//����(�m����)
float Length(const Vector3& v);
//���K��
Vector3 Normalize(const Vector3& v);

static const int kColumnWidth = 60;
void VectorScreenPrintf(int x, int y, const Vector3& vector, const char* label);