#pragma once
/* 外部依赖 */
/* 内部依赖 */
#include <typedef.hpp>
#include <feature_manager.hpp>
#include <frame_manager.hpp>

namespace ESKF_VIO_BACKEND {
    class Trianglator {
    public:

    public:
        /* 构造函数与析构函数 */
        Trianglator() {}
        ~Trianglator() {}
    public:
        /* 数值解析法三角测量特征点 */
        bool TrianglateAnalytic(const std::vector<Quaternion> &q_wc,
                                const std::vector<Vector3> &p_wc,
                                const std::vector<Vector2> &norm,
                                Vector3 &p_w);
        /* 高斯牛顿迭代法三角测量特征点 */
        bool TrianglateIterative(const std::vector<Quaternion> &q_wc,
                                 const std::vector<Vector3> &p_wc,
                                 const std::vector<Vector2> &norm,
                                 Vector3 &p_w);
    };
}