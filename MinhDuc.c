import SwiftUI

struct ContentView: View {
    @State private var username = ""
    @State private var password = ""
    @State private var isLoggedIn = false
    @State private var errorMessage = ""

    var body: some View {
        ZStack {
            Color.black.ignoresSafeArea()

            if isLoggedIn {
                VStack(spacing: 20) {
                    Text("MINHDUC")
                        .font(.system(size: 32, weight: .bold))
                        .foregroundColor(.white)

                    Text("Đăng nhập thành công")
                        .foregroundColor(.green)

                    Button("Đăng xuất") {
                        isLoggedIn = false
                    }
                    .foregroundColor(.red)
                }
            } else {
                VStack(spacing: 20) {
                    Text("MINHDUC")
                        .font(.system(size: 34, weight: .bold))
                        .foregroundColor(.white)

                    Text("ĐĂNG NHẬP")
                        .font(.headline)
                        .foregroundColor(.gray)

                    TextField("Tài khoản", text: $username)
                        .textFieldStyle(.roundedBorder)
                        .autocapitalization(.none)

                    SecureField("Mật khẩu", text: $password)
                        .textFieldStyle(.roundedBorder)

                    Button("ĐĂNG NHẬP") {
                        login()
                    }
                    .frame(maxWidth: .infinity)
                    .padding()
                    .background(Color.blue)
                    .foregroundColor(.white)
                    .cornerRadius(12)

                    if !errorMessage.isEmpty {
                        Text(errorMessage)
                            .foregroundColor(.red)
                            .font(.caption)
                    }
                }
                .padding(30)
            }
        }
    }

    func login() {
        if username == "MinhDuc" && password == "123456" {
            isLoggedIn = true
            errorMessage = ""
        } else {
            errorMessage = "Sai tài khoản hoặc mật khẩu"
        }
    }
}
