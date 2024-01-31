#pragma once

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