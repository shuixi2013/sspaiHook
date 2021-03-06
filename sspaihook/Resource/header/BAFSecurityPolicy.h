//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface BAFSecurityPolicy : NSObject
{
    _Bool _validatesCertificateChain;
    _Bool _allowInvalidCertificates;
    _Bool _validatesDomainName;
    unsigned long long _SSLPinningMode;
    NSArray *_pinnedCertificates;
    NSArray *_pinnedPublicKeys;
}

+ (id)defaultPinnedCertificates;
+ (id)defaultPolicy;
+ (id)keyPathsForValuesAffectingPinnedPublicKeys;
+ (id)policyWithPinningMode:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long SSLPinningMode; // @synthesize SSLPinningMode=_SSLPinningMode;
@property(nonatomic) _Bool allowInvalidCertificates; // @synthesize allowInvalidCertificates=_allowInvalidCertificates;
- (_Bool)evaluateServerTrust:(struct __SecTrust *)arg1;
- (_Bool)evaluateServerTrust:(struct __SecTrust *)arg1 forDomain:(id)arg2;
- (id)init;
@property(retain, nonatomic) NSArray *pinnedCertificates; // @synthesize pinnedCertificates=_pinnedCertificates;
@property(retain, nonatomic) NSArray *pinnedPublicKeys; // @synthesize pinnedPublicKeys=_pinnedPublicKeys;
@property(nonatomic) _Bool validatesCertificateChain; // @synthesize validatesCertificateChain=_validatesCertificateChain;
@property(nonatomic) _Bool validatesDomainName; // @synthesize validatesDomainName=_validatesDomainName;

@end

