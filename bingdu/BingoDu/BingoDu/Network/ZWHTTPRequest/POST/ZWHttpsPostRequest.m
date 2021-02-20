#import "ZWHttpsPostRequest.h"

@implementation ZWHttpsPostRequest

- (instancetype)initWithBaseURL:(NSString *)baseURL path:(NSString *)path parameters:(NSMutableDictionary *)parameters succed:(void (^)(id result))succed failed:(void (^)(NSString *errorString))failed {
    
    if (self = [super initWithBaseURL:baseURL path:path parameters:parameters succed:succed failed:failed]) {
        
        [self.request setValidatesSecureCertificate:NO];
        
        for (NSString *key in [parameters allKeys]) {
            [self.request setPostValue:parameters[key] forKey:key];
        }
    }
    
    return self;
}


@end
