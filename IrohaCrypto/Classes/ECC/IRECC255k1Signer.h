//
//  IRECC255k1Signer.h
//  IrohaCrypto
//
//  Created by Ruslan Rezin on 08/10/2018.
//

#import <Foundation/Foundation.h>
#import "IRCryptoKey.h"
#import "IRSignature.h"

@interface IRECC255k1Signer : NSObject<IRSignatureCreatorProtocol>

- (nullable instancetype)initWithPrivateKey:(id<IRPrivateKeyProtocol> _Nonnull)privateKey;

@end
