//
//  JFKJFaceResponseModel.h
//  JFKJLivnessSDK
//
//  Created by  on 2024/5/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFKJfaceDataModel : NSObject
// 1代表活体通过 2代表不通过
@property (nonatomic, assign) NSInteger livenessResult;
// 1代表hack 通过 2代表hack不通过
@property (nonatomic, assign) NSInteger hackResult;

// 人脸图片数据；加密
@property (nonatomic, strong) NSData *livenessFaceData;
// 加密数据文件路径
@property (nonatomic, strong) NSString *livenessFaceDataFile;

@end

@interface JFKJFaceResponseModel : NSObject
// code 码  “0000” 是成功
@property (nonatomic, strong) NSString *code;

@property (nonatomic, assign) NSInteger charge;
// 检测结果数据
@property (nonatomic, strong) JFKJfaceDataModel *data;
// 提示信息
@property (nonatomic, strong) NSString *msg;
// 流程ID
@property (nonatomic, strong) NSString *traceId;

@end

NS_ASSUME_NONNULL_END
