---
name: Automated API tests using Newman
on: push
jobs:
  automated-api-tests:
    runs-on: ubuntu-latest
    steps:
        - uses: actions/setup-node@v4
          with:
            node-version: 18
        - run: npm install -g newman
        - run: newman run "https://api.postman.com/collections/28219024-b9bcfb61-7ab2-46c7-bb64-9741e5460c7b?apiKey=${{ secrets.POSTMAN_API_KEY }}" #--environment "https://api.getpostman.com/environments/28219024-fa3ed16a-5885-41ef-a309-e4926e8f7aa3?apiKey=${{ secrets.POSTMAN_API_KEY }}"



        