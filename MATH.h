#pragma once
#include "Matrix4x4.h"
#include "Vector3.h"

struct Matrix3x3 {
	float m[3][3];
};

// 加算
Matrix4x4 Add(const Matrix4x4& m1, const Matrix4x4& m2);

// 積
Vector3 Multiply(const Vector3& v1, const Vector3& v2);

// スカラー倍
Vector3 Multiply(const Vector3& m, float scale);

// スカラー倍
Matrix4x4 Multiply(Matrix4x4 m, float scale);

// 行列の積
Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2);

// 長さ(ノルム)
float Length(const Vector3& v);

// 正規化
Vector3 Normalize(const Vector3& v);

// 内積
float Dot(const Vector3& v1, const Vector3& v2);

Vector3 Cross(const Vector3& v1, const Vector3& v2);

// 正射影ベクトル
Vector3 Project(const Vector3& v1, const Vector3& v2);

// 任意軸回転行列
Matrix4x4 MakeRotateAxisAngle(const Vector3& axis, float angle);

Matrix4x4 DirectionToDirection(const Vector3& from, const Vector3& to);

void MatrixScreenPrintf(int x, int y, const Matrix4x4& matrix, const char* label);