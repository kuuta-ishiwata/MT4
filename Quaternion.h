#pragma once
#include "Matrix4x4.h"
#include "Vector3.h"

struct Quaternion {
	float x;
	float y;
	float z;
	float w;
};

// 積
Quaternion Multiply(const Quaternion& lhs, const Quaternion& rhs);


// 単位Quaternion
Quaternion IdentituQuaternion();


// 共役Quaternionを返す
Quaternion Conjugate(const Quaternion& quaternion);

// 正規化したQuaternionを返す
Quaternion Normalize(const Quaternion& quaternion);


// 逆Quaternionを返す
Quaternion Inverse(const Quaternion& quaternion);

// Quaternionのnormを返す
float Norm(const Quaternion& quaternion);

// ベクトルをQuaternionで回転させた結果のベクトルを求める
Vector3 RotateVector(const Vector3& vector, Quaternion quaternion);
// Quaternionから回転行列を求める
Matrix4x4 MakeRotateMatrix(const Quaternion& quaternion);

// 任意軸回転を表すQuaternionの生成
Quaternion MakeRotateAxisAngleQuaternion(const Vector3& axis, float angle);

// Quaternionの数値表示
void QuaternionScreenPrintf(int x, int y, const Quaternion& quaternion, const char* label);

// 球面線形補間
Quaternion Slerp(const Quaternion& q0, const Quaternion& q1, float t);
