//
//  JFKJNetworkManager.h
//  JFKJLivnessSDK
//
//  Created by on 2024/5/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFKJNetworkManager : NSObject

+ (instancetype)sharedManager;

- (void)GET:(NSString *)urlString
 parameters:(NSDictionary *)parameters
 completion:(void (^)(NSDictionary *response, NSError *error))completion;

- (void)POST:(NSString *)urlString
  parameters:(NSDictionary *)parameters
  completion:(void (^)(NSDictionary *response, NSError *error))completion;

- (void)uploadFileWithURL:(NSString *)urlString
               parameters:(NSDictionary *)parameters
                 fileData:(NSData *)fileData
                 fileName:(NSString *)fileName
                 mimeType:(NSString *)mimeType
               completion:(void (^)(NSDictionary *response, NSError *error))completion;
@end

NS_ASSUME_NONNULL_END
